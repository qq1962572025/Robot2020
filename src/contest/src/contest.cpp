#include <ros/ros.h>
#include <image_transport/image_transport.h>
#include <opencv2/highgui/highgui.hpp>
#include <cv_bridge/cv_bridge.h>
#include <string>
#include <sys/stat.h>
#include <sys/types.h>
#include <cstdlib>
#include <QApplication>
#include <thread>

#include "mainwindow.h"

using namespace std;
using namespace cv;

int main(int argc, char **argv)
{
  ros::init(argc, argv, "contest");
  ros::NodeHandle n("~");

  QApplication a(argc, argv);
  MainWindow w;
  w.Set_ROS_node(n);
  w.show();

  w.setWindowTitle(QString("共融机器人"));

  string Mynt_para;
  n.getParam("Mynt_parameter_path",Mynt_para);
  w.MYNT_ini(Mynt_para);
  ros::Subscriber MYNT_img = n.subscribe("/mynteye/left/image_color", 10,
                                         &MainWindow::MYNT_image_input,&w);
  ros::Subscriber MYNT_dep = n.subscribe("/mynteye/depth/image_raw", 10,
                                         &MainWindow::MYNT_depth_input,&w);
  ros::Subscriber MAP = n.subscribe("/map",10,&MainWindow::Map_input,&w);

  std::thread update(&MainWindow::Task_update,&w);

  a.exec();

  update.join();

  return 0;
}

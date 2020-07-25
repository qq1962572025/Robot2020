#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <iostream>
#include <stdio.h>
#include <iostream>
#include <mutex>

#include <opencv2/opencv.hpp>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/imgproc/types_c.h>

#include <ros/ros.h>
#include <ros/package.h>
#include <nav_msgs/OccupancyGrid.h>
#include <tf/transform_listener.h>
#include <image_transport/image_transport.h>
#include <cv_bridge/cv_bridge.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
  Q_OBJECT

public:
  explicit MainWindow(QWidget *parent = nullptr);
  void Set_ROS_node(ros::NodeHandle &_nh);

  void MYNT_image_input(const sensor_msgs::ImageConstPtr &image_input);
  void MYNT_depth_input(const sensor_msgs::ImageConstPtr &image_input);
  void MYNT_ini(const std::string Path);

  void Map_input(const nav_msgs::OccupancyGrid &map_imput);

  void Task_update();

  ~MainWindow();

private:
  Ui::MainWindow *ui;
  cv::Mat rescale_mat(cv::Mat &src);
  ros::NodeHandle nh;
  cv::Mat map_task,image_MYNT,depth_MYNT;
  cv::Mat K_l,K_r,coeffs_l,coeffs_r;
  boost::mutex MYNT_Image_Mutex,MYNT_Depth_Mutex,Map_Mutex;
  double Map_resolution;
  int task_type;

private slots:
  void on_push_button_task1_clicked();
  void on_push_button_task2_clicked();
  void on_push_button_task3_clicked();
  void on_push_button_task4_clicked();
  void on_push_button_task5_clicked();
  void on_push_button_task6_clicked();
  void on_button_exit_clicked();
  void on_button_exit1_clicked();
  void on_pushButton_exit2_clicked();
  void on_pushButton_exit3_clicked();
  void on_pushButton_exit4_clicked();
  void on_pushButton_exit5_clicked();
  void on_pushButton_exit6_clicked();
  void on_button_attr_1_clicked();
};

#endif // MAINWINDOW_H

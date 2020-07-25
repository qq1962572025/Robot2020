#include "mainwindow.h"
#include "ui_mainwindow.h"

using namespace std;
using namespace cv;

MainWindow::MainWindow(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::MainWindow)
{
  this->setWindowIcon(QIcon(":/task_image/icon/1.png"));
  this->setFixedSize(1600,900);
  ui->setupUi(this);
  ui->stackedWidget->setCurrentIndex(int(0));
  ui->push_button_task1->setStyleSheet(
        "QPushButton{"
        "border-radius: 15px; "
        "border-style:outset;"
        "border-width:10px;"
        "border-color:rgb(100,0,0);"
        "font-family:'Microsoft YaHei';"
        "font-size:80px;"
        "color: rgb(40,40,40);"
        "border-image:url(:/task_image/image/1.png);}"
        "QPushButton:hover{"
        "border-radius: 12px; "
        "border-style:outset;"
        "border-width:3px;"
        "border-color:rgb(60,60,60);"
        "font-family:'Microsoft YaHei';"
        "font-size:116px;"
        "color: rgb(0,0,0);"
        "border-image:url(:/task_image/image/1.png);}"
        );
  ui->push_button_task2->setStyleSheet(
        "QPushButton{"
        "border-radius: 15px; "
        "border-style:outset;"
        "border-width:10px;"
        "border-color:rgb(100,0,0);"
        "font-family:'Microsoft YaHei';"
        "font-size:80px;"
        "color: rgb(60,60,60);"
        "border-image:url(:/task_image/image/2.png);}"
        "QPushButton:hover{"
        "border-radius: 12px; "
        "border-style:outset;"
        "border-width:3px;"
        "border-color:rgb(60,60,60);"
        "font-family:'Microsoft YaHei';"
        "font-size:106px;"
        "color: rgb(0,0,0);"
        "border-image:url(:/task_image/image/2.png);}"
        );
  ui->push_button_task3->setStyleSheet(
        "QPushButton{"
        "border-radius: 15px; "
        "border-style:outset;"
        "border-width:10px;"
        "border-color:rgb(200,200,200);"
        "font-family:'Microsoft YaHei';"
        "font-size:80px;"
        "color: rgb(150,150,150);"
        "border-image:url(:/task_image/image/3.png);}"

        "QPushButton:hover{"
        "border-radius: 12px; "
        "border-style:outset;"
        "border-width:3px;"
        "border-color:rgb(60,60,60);"
        "font-family:'Microsoft YaHei';"
        "font-size:106px;"
        "color: rgb(220,220,220);"
        "border-image:url(:/task_image/image/3.png);}"
        );
  ui->push_button_task4->setStyleSheet(
        "QPushButton{"
        "border-radius: 15px; "
        "border-style:outset;"
        "border-width:10px;"
        "border-color:rgb(100,0,0);"
        "font-family:'Microsoft YaHei';"
        "font-size:80px;"
        "color: rgb(200,200,200);"
        "border-image:url(:/task_image/image/4.png);}"
        "QPushButton:hover{"
        "border-radius: 12px; "
        "border-style:outset;"
        "border-width:3px;"
        "border-color:rgb(60,60,60);"
        "font-family:'Microsoft YaHei';"
        "font-size:106px;"
        "color: rgb(240,240,240);"
        "border-image:url(:/task_image/image/4.png);}"
        );
  ui->push_button_task5->setStyleSheet(
        "QPushButton{"
        "border-radius: 15px; "
        "border-style:outset;"
        "border-width:10px;"
        "border-color:rgb(100,0,0);"
        "font-family:'Microsoft YaHei';"
        "font-size:80px;"
        "color: rgb(200,200,200);"
        "border-image:url(:/task_image/image/5.png);}"
        "QPushButton:hover{"
        "border-radius: 12px; "
        "border-style:outset;"
        "border-width:3px;"
        "border-color:rgb(60,60,60);"
        "font-family:'Microsoft YaHei';"
        "font-size:106px;"
        "color: rgb(255,255,255);"
        "border-image:url(:/task_image/image/5.png);}"
        );
  ui->push_button_task6->setStyleSheet(
        "QPushButton{"
        "border-radius: 15px; "
        "border-style:outset;"
        "border-width:10px;"
        "border-color:rgb(100,0,0);"
        "font-family:'Microsoft YaHei';"
        "font-size:80px;"
        "color: rgb(200,200,200);"
        "border-image:url(:/task_image/image/6.png);}"

        "QPushButton:hover{"
        "border-radius: 12px; "
        "border-style:outset;"
        "border-width:3px;"
        "border-color:rgb(60,60,60);"
        "font-family:'Microsoft YaHei';"
        "font-size:106px;"
        "color: rgb(240,240,240);"
        "border-image:url(:/task_image/image/6.png);}"
        );
  ui->button_exit1->setStyleSheet(
        "QPushButton{"
        "border-radius:15px; "
        "border-style:outset;"
        "border-width:1px;"
        "border-color:rgb(120,120,120);"
        "background-image:url(:/task_image/icon/1.png);}"

        "QPushButton:hover{"
        "border-radius: 12px; "
        "border-style:outset;"
        "border-width:1px;"
        "border-color:rgb(80,80,80);"
        "background-image:url(:/task_image/icon/1.png);}"
        );
  ui->button_attr_1->setStyleSheet(
        "QPushButton{"
        "border-radius:15px; "
        "border-style:outset;"
        "border-width:1px;"
        "border-color:rgb(120,120,120);"
        "background-image:url(:/task_image/icon/3.png);}"

        "QPushButton:hover{"
        "border-radius: 12px; "
        "border-style:outset;"
        "border-width:1px;"
        "border-color:rgb(80,80,80);"
        "background-image:url(:/task_image/icon/3.png);}"
        );

  Map_resolution=1;
  task_type=-1;

}

void MainWindow::Set_ROS_node(ros::NodeHandle &_nh){
  nh=_nh;
}

MainWindow::~MainWindow(){

  delete ui;
}

Mat MainWindow::rescale_mat(Mat &src){
  Mat dst;
  cvtColor(src, dst, COLOR_RGB2GRAY);
  GaussianBlur(dst, dst, Size(3, 3), 0);
  threshold(dst, dst, 165, 255, THRESH_BINARY);
  medianBlur(dst, dst, 3);
  erode(dst, dst, Mat(9, 9, CV_8U));
  int left=dst.size[0]-1;
  int right=0;
  int top=dst.size[1]-1;
  int bottom=0;

  for(int i=0;i<dst.size[0];i++){
    for(int j=0;j<dst.size[1];j++){
      if((int)dst.at<uchar>(i,j)>0){
        if(i>right) right = i;
        if(i<left)left = i;
        if(j>bottom) bottom = j;
        if(j<top)top = j;

      }
    }
  }
  int h = bottom-top;
  int w = right-left;
  int centerx = left + int(w/2);
  int centery = top + int(h/2);
  int l = max(h,w);
  Mat dd(src,Rect(max(centerx-(l/2)-40,0),max(centery-(l/2)-40,0),l+80,l+80));
  return dd;
}

void MainWindow::on_push_button_task1_clicked()
{

  ui->stackedWidget->setCurrentIndex(int(3));

}
void MainWindow::on_push_button_task2_clicked()
{
  ui->stackedWidget->setCurrentIndex(int(2));
}

void MainWindow::on_push_button_task3_clicked()
{

  ui->stackedWidget->setCurrentIndex(int(1));

  ui->label_title_1->setText(QString("场景三：黑暗环境"));
  ui->label_title_1->setStyleSheet("font: 22pt 'Umpush';");

  task_type=3;
}

void MainWindow::on_push_button_task4_clicked()
{
  ui->stackedWidget->setCurrentIndex(int(4));
}

void MainWindow::on_push_button_task5_clicked()
{
  ui->stackedWidget->setCurrentIndex(int(5));
}

void MainWindow::on_push_button_task6_clicked()
{
  ui->stackedWidget->setCurrentIndex(int(6));
}

void MainWindow::on_button_exit_clicked()
{
  this->close();
}
void MainWindow::on_button_exit1_clicked()
{
  ui->stackedWidget->setCurrentIndex(int(0));
}
void MainWindow::on_pushButton_exit2_clicked()
{
  ui->stackedWidget->setCurrentIndex(int(0));
}
void MainWindow::on_pushButton_exit3_clicked()
{
  ui->stackedWidget->setCurrentIndex(int(0));
}
void MainWindow::on_pushButton_exit4_clicked()
{
  ui->stackedWidget->setCurrentIndex(int(0));
}
void MainWindow::on_pushButton_exit5_clicked()
{
  ui->stackedWidget->setCurrentIndex(int(0));
}
void MainWindow::on_pushButton_exit6_clicked()
{
  ui->stackedWidget->setCurrentIndex(int(0));
}
void MainWindow::on_button_attr_1_clicked()
{
  this->close();
}

void MainWindow::MYNT_image_input(const sensor_msgs::ImageConstPtr &image_input){
  cv_bridge::CvImagePtr cv_ptr;
  try
  {
    cv_ptr = cv_bridge::toCvCopy(image_input, sensor_msgs::image_encodings::BGR8);
  }
  catch (cv_bridge::Exception& e)
  {
    printf("MYNT_image_input exception: %s", e.what());
    return;
  }
  cv::Mat image=cv_ptr->image.clone();

  MYNT_Image_Mutex.lock();

  image_MYNT=image;

  MYNT_Image_Mutex.unlock();
}

void MainWindow::MYNT_depth_input(const sensor_msgs::ImageConstPtr &image_input){
  cv_bridge::CvImagePtr cv_ptr;
  try
  {
    cv_ptr = cv_bridge::toCvCopy(image_input, sensor_msgs::image_encodings::TYPE_16UC1);
  }
  catch (cv_bridge::Exception& e)
  {
    printf("MYNT_depth_input exception: %s", e.what());
    return;
  }
  cv::Mat image=cv_ptr->image.clone();

  MYNT_Depth_Mutex.lock();

  image.convertTo(depth_MYNT,CV_8U);

  MYNT_Depth_Mutex.unlock();

}

void MainWindow::MYNT_ini(const string Path){

  std::string path = ros::package::getPath("contest");
  FileStorage fs(path+Path, FileStorage::READ);
  if (!fs.isOpened())
    cout<<"Fail to open "<<Path<<endl;
  else {
    fs["K_l"] >> K_l;
    fs["coeffs_l"] >> coeffs_l;
    fs["K_r"] >> K_r;
    fs["coeffs_r"] >> coeffs_r;
    //    cout<<K_l<<endl<<coeffs_l<<endl<<K_r<<coeffs_r<<endl;
  }
}

void MainWindow::Map_input(const nav_msgs::OccupancyGrid &map_imput){

  int width,height;
  width=map_imput.info.width;
  height=map_imput.info.height;
  Map_resolution=map_imput.info.resolution;
  Mat map=Mat::zeros(height,width,CV_8UC3);
  for (int i=0;i<height;i++)
    for (int j=0;j<width;j++){
      int temp=map_imput.data[i*width+j],color;
      if (temp==100)
        color=0;
      if (temp==-1)
        color=100;
      if (temp==0)
        color=255;
      map.ptr<uchar>(i)[3*j]=map.ptr<uchar>(i)[3*j+1]=map.ptr<uchar>(i)[3*j+2]=color;
    }

  Map_Mutex.lock();
  map_task=map;
  Map_Mutex.unlock();

}

void MainWindow::Task_update(){

  tf::TransformListener listener;

  ros::Rate rate(5);

  while(ros::ok())
  {
    ros::spinOnce();

    if (task_type==3){
      MYNT_Image_Mutex.lock();
      if (image_MYNT.data){
        QImage Image_MYNT=QImage((const uchar*)(image_MYNT.data), image_MYNT.cols, image_MYNT.rows, image_MYNT.step, QImage::Format_RGB888);
        ui->label_rgb_image->setPixmap(QPixmap::fromImage(Image_MYNT));
        ui->label_rgb_image->setScaledContents(true);
      }
      MYNT_Image_Mutex.unlock();

      MYNT_Depth_Mutex.lock();
      if (depth_MYNT.data){
        QImage Depth_MYNT=QImage((const uchar*)(depth_MYNT.data), depth_MYNT.cols, depth_MYNT.rows, depth_MYNT.step, QImage::Format_Grayscale8);
        ui->label_hot_image->setPixmap(QPixmap::fromImage(Depth_MYNT));
        ui->label_hot_image->setScaledContents(true);
      }
      MYNT_Depth_Mutex.unlock();

      Map_Mutex.lock();
      if (map_task.data){
        Mat map=map_task;
        tf::StampedTransform transform;
        try{
          listener.lookupTransform("/map", "/base_link",ros::Time(0), transform);
        }
        catch (tf::TransformException &ex) {
          printf("%s\n",ex.what());
          ros::Duration(1.0).sleep();
          Map_Mutex.unlock();
          continue;
        }
        int xx=transform.getOrigin().x()/Map_resolution,
            yy=transform.getOrigin().y()/Map_resolution;

         circle(map,Point(map.cols/2+xx,map.rows/2+yy),5,Scalar(0,0,255),-1);

         Mat rescaled_mat = rescale_mat(map);
         QImage Img = QImage((const uchar*)(rescaled_mat.data), rescaled_mat.cols, rescaled_mat.rows, rescaled_mat.step, QImage::Format_RGB888);
         ui->label_map_1->setPixmap(QPixmap::fromImage(Img));
         ui->label_map_1->setScaledContents(true);

      }
      Map_Mutex.unlock();

    }

    rate.sleep();
  }

}

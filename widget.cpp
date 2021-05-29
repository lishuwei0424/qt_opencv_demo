#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    label_img = new MyLabel(this);
    //关联开始坐标的信号
    connect(label_img,SIGNAL(StartPointSignal(QPoint)),
            this,SLOT(StartPointSlot(QPoint)));

    //关联结束坐标的信号
    connect(label_img,SIGNAL(StopPointSignal(QPoint)),
            this,SLOT(StopPointSlot(QPoint)));

    label_img->setStyleSheet("border:1px solid rgb(0, 0, 0)");
    label_img->setMaximumSize(600,400);
    label_img->setMinimumSize(600,400);
    ui->label_layout->addWidget(label_img);

    connect(ui->path_btn,SIGNAL(clicked(bool)),
            this,SLOT(open_path_slot()));
    connect(ui->lineEdit_size_h,SIGNAL(textChanged(QString)),
            this,SLOT(PointTextChangeSlot(QString)));
    connect(ui->lineEdit_size_w,SIGNAL(textChanged(QString)),
            this,SLOT(PointTextChangeSlot(QString)));
    connect(ui->lineEdit_start_x,SIGNAL(textChanged(QString)),
            this,SLOT(PointTextChangeSlot(QString)));
    connect(ui->lineEdit_start_y,SIGNAL(textChanged(QString)),
            this,SLOT(PointTextChangeSlot(QString)));

}
void Widget::PointTextChangeSlot(QString){

    //根据输入框的大小变化 在label上绘制长方形
    double Start_x = ui->lineEdit_start_x->text().toInt();
    double Start_y = ui->lineEdit_start_y->text().toInt();
    double ROI_w = ui->lineEdit_size_w->text().toInt();
    double ROI_h = ui->lineEdit_size_h->text().toInt();
    double label_size_w = label_img->size().width();
    double label_size_h = label_img->size().height();
    double Stop_x = Start_x+ROI_w;
    double Stop_y = Start_y+ROI_h;
    //计算出在窗体上变化后的坐标  (因为图片显示在label上大小变化了)
    int label_start_x = (Start_x/img_w)*label_size_w;
    int label_start_y = (Start_y/img_h)*label_size_h;

    int label_stop_x = (Stop_x/img_w)*label_size_w;
    int label_stop_y = (Stop_y/img_h)*label_size_h;

    //调用label的绘制函数
    label_img->PaintRect(QPoint(label_start_x,label_start_y),
                        QPoint(label_stop_x,label_stop_y) );
}

void Widget::StartPointSlot(QPoint p){
        StartPoint = p;

        double label_size_w = label_img->size().width();
        double label_size_h = label_img->size().height();
        double point_x = p.x();
        double point_y = p.y();

        int ROI_x = (point_x/label_size_w)*img_w;
        int ROI_y = (point_y/label_size_h)*img_h;

        ui->lineEdit_start_x->setText(QString::number(ROI_x));
        ui->lineEdit_start_y->setText(QString::number(ROI_y));
}
void Widget::StopPointSlot(QPoint p){
        double label_size_w = label_img->size().width();
        double label_size_h = label_img->size().height();
        double point_End_x = p.x();
        double point_End_y = p.y();
        double point_Start_x = StartPoint.x();
        double point_Start_y = StartPoint.y();
          //计算比例 得出原图ROI的宽高 (因为图片显示在label上大小变化了)
        int ROI_w = ((point_End_x-point_Start_x)/label_size_w)*img_w;
        int ROI_h = ((point_End_y-point_Start_y)/label_size_h)*img_h;


        ui->lineEdit_size_w->setText(QString::number(ROI_w));
        ui->lineEdit_size_h->setText(QString::number(ROI_h));
}

void Widget::open_path_slot(){
    QString file_name = QFileDialog::getOpenFileName(this,tr("选择图片文件"),".",
                                                    tr("图片格式(*.jpg *.png)"));
    QFile file(file_name);
    if(!file.open(QIODevice::ReadOnly))
    {
        return;
    }

    ui->lineEdit_path->setText(file_name);
    Mat frame=imread(file_name.toStdString().c_str());
    img_w = frame.cols;
    img_h = frame.rows;
    show_img(frame,label_img);

    ui->rate_label  ->setText(QString::number(img_h));
    ui->time_label->setText(QString::number(img_w));

}
void Widget::show_img(Mat image,QLabel *label){

    cv::cvtColor(image,image,COLOR_BGR2RGB);
    QImage img = QImage((const unsigned char*)(image.data),image.cols,image.rows,
                        image.cols*image.channels(),
                        QImage::Format_RGB888).scaled(label->width(), label->height());

    label->clear();
    label->setPixmap(QPixmap::fromImage(img));
    //ui->processPushButton->setEnabled(true);

}
Widget::~Widget()
{
    delete ui;
}

void Widget::on_path_btn_clicked()
{

}


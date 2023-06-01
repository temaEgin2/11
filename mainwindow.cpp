#include "mainwindow.h"
#include <QVBoxLayout>
#include <QLabel>
#include <QPushButton>
#include <QTimer>
#include <QTWidgets>

MainWindow::MainWindow(){
	resize(900,500);
	setWindowTitle("ClipGallery");
	QFont buttonFont("Time", 10, QFont::Bold);
	
	pathLabel = new QLabel(this);
	pathLabel->setGeometry(30,0,850,20);
	pathLabel->setText("ImgPath");
	pathLabel->setFont(QFont("Time",10,QFont::Bold));
	
	pathEdit=new QLineEdit(this);
	pathEdit->setText("Image path");
	pathEdit->setGeometry(30,30,850,20);
	
	openButton = new QPushButton("Open",this);
	openButton->setGeometry(30,60,50,30);
	openButton->setFont(buttonFont);
	
connect (openButton, &QPushButton::clicked,this, &MainWindow::openButtonClick);}
	
void MainWindow::paintEvent(QPaintEvent *){
	QPainter painter(this);
	pixmap.load(imgPath);
	painter.drawPixmap(0,200,pixmap);
	painter.restore();}
	
void MainWindow::openButtonClick(){
	imgPath = pathEdit->text();
	update();}


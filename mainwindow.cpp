#include "mainwindow.h"
#include <QPushButton>
#include <QScrollBar>
#include <QSlider>
#include <QRadioButton>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    this->setGeometry(50,50,250,250);

    QPushButton *CloseWindow = new QPushButton("Close", this);
    CloseWindow->setGeometry(QRect(170,210,70,30));

    connect(CloseWindow, SIGNAL(clicked()), this, SLOT(close()));

    QScrollBar *TempBar = new QScrollBar(this);
    TempBar->setGeometry(QRect(230,0,20,150));

    QSlider *TempSlider = new QSlider(this);
    TempSlider->setGeometry(QRect(200,0,20,150));

    connect(TempBar, SIGNAL(sliderMoved(int)), TempSlider, SLOT(setValue(int)));
    connect(TempSlider, SIGNAL(sliderMoved(int)), TempBar, SLOT(setValue(int)));

    QRadioButton *RedButton = new QRadioButton("Red", this);
    RedButton->setGeometry(QRect(100,50,70,30));
//  RedButton->setChecked(true);

    QRadioButton *YellowButton = new QRadioButton("Yellow", this);
    YellowButton->setGeometry(QRect(100,75,70,30));

    QRadioButton *GreenButton = new QRadioButton("Green", this);
    GreenButton->setGeometry(QRect(100,100,70,30));

    QPushButton *StartWindow = new QPushButton("Start", this);
    StartWindow->setGeometry(QRect(10,50,70,30));

    QPushButton *StopWindow = new QPushButton("Stop", this);
    StopWindow->setGeometry(QRect(10,100,70,30));



    connect(StartWindow, SIGNAL(clicked()), RedButton, SLOT(click()));

    connect(RedButton, SIGNAL(clicked()), YellowButton, SLOT(click()));

    connect(YellowButton, SIGNAL(clicked()), GreenButton, SLOT(click()));

   // connect(GreenButton, SIGNAL(clicked()), YellowButton, SLOT(click()));

   // connect(YellowButton, SIGNAL(clicked()), RedButton, SLOT(click()));




  /*  YellowButton->setChecked(true);
    connect(YellowButton, SIGNAL(clic()), GreenButton, SLOT(click()));*/
  }
    void MainWindow::connectPushAndRadio()
    {

    }
// MainWindow::~MainWindow()

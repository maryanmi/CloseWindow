#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

//class QPushButton;
//class QRadioButton;
class QSignalMapper;

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = 0);

public slots:
    void connectPushAndRadio();

private:
    QSignalMapper *signalMapper;

};

#endif // MAINWINDOW_H

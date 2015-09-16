#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <ztpmanager.h>
#include"mythread.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    ZTPManager* ztpm;
    MyThread* thread;
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();
    void fun();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H

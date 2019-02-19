#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <qdebug.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_2_clicked()
{
    QMessageBox message(QMessageBox::Warning,"Information","Really to login?",QMessageBox::Yes|QMessageBox::No,NULL);
    if (message.exec()==QMessageBox::Yes){
        qDebug()<<"clicked yes\n";

    }else{
        qDebug()<<"clicked no\n";
    }
}

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <windows.h>
#include<QPropertyAnimation>
#include <QGraphicsScene>
#include <QGraphicsView>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_btnAvion1_clicked()
{
    MainWindow::moveAirplane();

}

void MainWindow::moveAirplane()
{
    airPlaneAnimation = new QSequentialAnimationGroup(this);

    QPropertyAnimation* moverAvionDerecha = new QPropertyAnimation(ui->btnAvion1,"geometry");
    moverAvionDerecha->setDuration(4000);
    moverAvionDerecha->setStartValue(ui->btnAvion1->geometry());
    moverAvionDerecha->setEndValue(ui->btnAvion1->geometry().translated(150,0));
    airPlaneAnimation->addAnimation(moverAvionDerecha);

    QPropertyAnimation* moverAvionAbajo = new QPropertyAnimation(ui->btnAvion1, "geometry");
    moverAvionAbajo->setDuration(3000);
    moverAvionAbajo->setStartValue(moverAvionDerecha->endValue());
    moverAvionAbajo->setEndValue(moverAvionDerecha->endValue().toRect().translated(0, 400));
    airPlaneAnimation->addAnimation(moverAvionAbajo);

    QPropertyAnimation* moverAvionParqueo = new QPropertyAnimation(ui->btnAvion1, "geometry");
    moverAvionParqueo->setDuration(2000);
    moverAvionParqueo->setStartValue(moverAvionAbajo->endValue());
    moverAvionParqueo->setEndValue(moverAvionAbajo->endValue().toRect().translated(600, 0));
    airPlaneAnimation->addAnimation(moverAvionParqueo);
    airPlaneAnimation->start();
}

void MainWindow::on_btnStart_clicked()
{

}

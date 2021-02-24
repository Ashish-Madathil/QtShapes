#include "mainwindow.h"
#include "ui_mainwindow.h"

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


void MainWindow::on_btnAstroid_clicked()
{
    //add code to set render area's shape
    this -> ui -> renderArea -> setShape(RenderArea::Astroid);
    // change the background color for the render area
    // add a function to change the background color
    //use the ui object to access our render area
    //this -> ui-> renderArea -> setBackgroundColor(Qt::red);
    this -> ui-> renderArea -> repaint();


}

void MainWindow::on_btncycloid_clicked()
{
    this -> ui -> renderArea -> setShape(RenderArea::Cycloid);
   // this -> ui-> renderArea -> setBackgroundColor(Qt::green);
    this -> ui-> renderArea -> repaint();
}

void MainWindow::on_btnHuygens_clicked()
{
    this -> ui -> renderArea -> setShape(RenderArea::HuygensCycloid);
  //  this -> ui-> renderArea -> setBackgroundColor(Qt::blue);
    this -> ui-> renderArea -> repaint();
}

void MainWindow::on_btnHypo_clicked()
{
    this -> ui -> renderArea -> setShape(RenderArea::HypoCycloid);
   // this -> ui-> renderArea -> setBackgroundColor(Qt::yellow);
    this -> ui-> renderArea -> repaint();
}

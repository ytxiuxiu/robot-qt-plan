#include <boost/make_shared.hpp>

#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    SoDB::init();
}

MainWindow::~MainWindow()
{
    delete ui;
}

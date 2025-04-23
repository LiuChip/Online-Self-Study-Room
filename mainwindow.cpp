#pragma once
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QLabel>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    setupUI();
    setWindowTitle("在线自习室");
        resize(800,600);
}

void MainWindow::setupUI()
{
    QLabel *welcomeLabel =new QLabel("欢迎来到在线自习室！",this);
    welcomeLabel->setAlignment(Qt::AlignCenter);
    setCentralWidget(welcomeLabel);

    statusBar()->showMessage("就绪");
}

MainWindow::~MainWindow()
{
    delete ui;
}

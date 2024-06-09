#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), toolBar(new ToolBar(this)) {

    setCentralWidget(new QWidget(this));  // Placeholder for your central widget
    addToolBar(toolBar);

    centralWidget = new QWidget(this);

    hlayout = new QHBoxLayout(centralWidget);
    vlayout = new QVBoxLayout;
    metalayout = new QHBoxLayout;
    btnlayout = new QHBoxLayout;

    centralWidget->setLayout(hlayout);

    setCentralWidget(centralWidget);

    QWidget *leftLayoutWidget = new QWidget();
    leftLayoutWidget->setStyleSheet("background-color: red;");
    hlayout->addWidget(leftLayoutWidget);

    QWidget *rightLayoutWidget = new QWidget();
    rightLayoutWidget->setStyleSheet("background-color: green;");
    hlayout->addWidget(rightLayoutWidget);

    rightLayoutWidget->setLayout(vlayout);

    vlayout->addLayout(metalayout);
    vlayout->addLayout(btnlayout);

    QPushButton *btn_prev = new QPushButton;
}

MainWindow::~MainWindow() {
}

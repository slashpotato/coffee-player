#include "mainwindow.h"
#include <QIcon>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), toolBar(new ToolBar(this)) {

    setCentralWidget(new QWidget(this));  // Placeholder for your central widget
    addToolBar(toolBar);

    centralWidget = new QWidget(this);

    glayout = new QGridLayout(centralWidget);
    vlayout = new QVBoxLayout;
    metalayout = new QVBoxLayout;
    btnlayout = new QHBoxLayout;

    centralWidget->setLayout(glayout);

    setCentralWidget(centralWidget);

    listWidget = new QWidget();
    listWidget->setStyleSheet("background-color: blue;");
    glayout->addWidget(listWidget, 0, 0);

    listWidget->setHidden(false);

    QWidget *leftLayoutWidget = new QWidget();
    leftLayoutWidget->setStyleSheet("background-color: red;");
    glayout->addWidget(leftLayoutWidget, 0, 1);

    QWidget *rightLayoutWidget = new QWidget();
    //rightLayoutWidget->setStyleSheet("background-color: green;");
    glayout->addWidget(rightLayoutWidget, 0, 2);

    rightLayoutWidget->setLayout(vlayout);

    vlayout->addStretch();
    vlayout->addLayout(metalayout);
    vlayout->addLayout(btnlayout);

    track_author = new QLabel;
    track_author->setText("slashpotato");
    track_name->setStyleSheet("font-size: 16px;");

    track_name = new QLabel;
    track_name->setText("patatiota");
    track_name->setStyleSheet("font-size: 20px;");

    metalayout->addWidget(track_author);
    metalayout->addWidget(track_name);

    btn_prev = new QPushButton;
    btn_prev->setToolTip("Play previous track");
    btn_prev->setIcon(QIcon::fromTheme("media-skip-backward"));

    btn_pause = new QPushButton;
    btn_pause->setToolTip("Play/Pause");
    btn_pause->setIcon(QIcon::fromTheme("media-play"));

    btn_next = new QPushButton;
    btn_next->setToolTip("Play next track");
    btn_next->setIcon(QIcon::fromTheme("media-skip-forward"));

    btnlayout->addWidget(btn_prev);
    btnlayout->addWidget(btn_pause);
    btnlayout->addWidget(btn_next);
}

MainWindow::~MainWindow() {
}

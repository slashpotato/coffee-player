#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "toolbar.h"

#include <QWidget>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QGridLayout>
#include <QPushButton>
#include <QLabel>
#include <QScrollArea>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void toggleListWidgetVisibility();

private:
    ToolBar *toolBar;
    QWidget *centralWidget, *listWidget;
    QHBoxLayout *btnlayout;
    QVBoxLayout *vlayout, *metalayout, *listlayout;
    QGridLayout *glayout;
    QPushButton *btn_pause, *btn_prev, *btn_next;
    QLabel *track_name, *track_author;
    QScrollArea *track_list;

};

#endif // MAINWINDOW_H

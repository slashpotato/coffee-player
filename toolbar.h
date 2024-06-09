#ifndef TOOLBAR_H
#define TOOLBAR_H

#include <QToolBar>
#include <QAction>

class ToolBar : public QToolBar {
    Q_OBJECT

public:
    explicit ToolBar(QWidget *parent = nullptr);

private:
    void createActions();

    QAction *act_file;
    QAction *act_view;
};

#endif // TOOLBAR_H

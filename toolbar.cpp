#include "toolbar.h"
#include <QIcon>

ToolBar::ToolBar(QWidget *parent) : QToolBar(parent) {
    createActions();
}

void ToolBar::createActions() {
    act_file = new QAction(tr("File"), this);
    act_view = new QAction(tr("View"), this);

    addAction(act_file);
    addAction(act_view);

    setMovable(false);

    // Connect actions to slots if necessary
    connect(act_file, &QAction::triggered, this, [](){
        // Your code here
    });

    connect(act_view, &QAction::triggered, this, [](){
        // Your code here
    });
}

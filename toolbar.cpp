#include "toolbar.h"
#include <QIcon>

ToolBar::ToolBar(QWidget *parent) : QToolBar(parent) {
    createActions();
}

void ToolBar::createActions() {
    act_file = new QAction(QIcon::fromTheme("fileopen"), tr("File"), this);
    act_view = new QAction(QIcon::fromTheme("playlist-symbolic"), tr("View Playlist"), this);

    addAction(act_file);
    addAction(act_view);

    setMovable(false);

    connect(act_file, &QAction::triggered, this, [](){

    });

    connect(act_view, &QAction::triggered, this, [](){

    });
}

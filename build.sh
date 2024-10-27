#!/bin/bash
qmake6 || qmake-qt6
make --jobs=$(nproc)

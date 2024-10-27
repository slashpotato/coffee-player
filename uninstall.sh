#!/bin/bash

if [ "$EUID" -ne 0 ]
  then echo "Please run as root."
  exit
fi

make uninstall --jobs=$(nproc)
rm -rf /opt/coffee-player

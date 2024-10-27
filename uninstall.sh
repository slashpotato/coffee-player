#!/bin/bash

if [ "$EUID" -ne 0 ]
  then echo "Please run as root."
  exit
fi

make uninstall --jobs=$(nproc) && echo "Successfully uninstalled" || echo "Error"
rm -rf /usr/local/share/applications/$(find . | grep .desktop | cut -c 3-) && echo "Deleted desktop entry"

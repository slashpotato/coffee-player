#!/bin/bash

if [ "$EUID" -ne 0 ]
  then echo "Please run as root."
  exit
fi

if cat /root/.gitconfig | grep "directory = $PWD" >> /dev/null; then
	true
else
	git config --global --add safe.directory $PWD
fi

if git status | grep 'behind' > /dev/null; then
	echo "Update available! Run 'git pull' to update and then re-run this script."
fi

if xbps-query -V &> /dev/null; then
        read -p "Install packages with xbps? (Y/n) " xbpsi

        case "$xbpsi" in
                [Yy]*|"")
			xbps-install -yu ffmpeg-devel taglib-devel ffmpeg taglib qt6-multimedia qt6-multimedia-devel qt6-core qt6-base qt6-base-devel qt6-widgets qt6-gui
                ;;
                *)
                        true
                ;;
        esac
fi

qmake6 || qmake-qt6 || /lib/qt6/bin/qmake6
make install --jobs=$(nproc) &> /dev/null && echo "Successfully installed" || echo "Error"
cp *.desktop /usr/local/share/applications && echo "Created desktop entry"

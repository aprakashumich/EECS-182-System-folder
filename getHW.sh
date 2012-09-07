#!/bin/sh
cd /home/me/System/release/hw/
svn update

if [ -d /home/me/System/release/hw/"$1" ]; then
    if [ ! -d /home/me/hw/"$1" ]; then
        echo making directory /home/me/hw/"$1"
        mkdir -p /home/me/hw/"$1"
    fi
    cp -i -r "$1"/* /home/me/hw/"$1"/     
    else
    echo there is no directory /home/me/System/release/hw/"$1"
fi

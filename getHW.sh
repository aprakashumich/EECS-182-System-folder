#!/bin/sh
cd ~/System/release/hw/
svn update

if [ -d ~/System/release/hw/"$1" ]; then
    if [ ! -d ~/hw/"$1" ]; then
        echo making directory ~/hw/"$1"
        mkdir -p ~/hw/"$1"
    fi
    cp -i -r "$1"/* ~/hw/"$1"/     
    else
    echo there is no directory ~/System/release/hw/"$1"
fi
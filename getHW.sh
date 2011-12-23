#!/bin/sh
cd ~/System/
git pull

if [ -d ~/System/hw/"$1" ]; then
    if [ ! -d ~/hw/"$1" ]; then
	echo making directory ~/hw/"$1"
	mkdir -p ~/hw/"$1"
    fi
    cp -i -r hw/$1/* ~/hw/$1/     
    else
    echo there is no directory ~/System/hw/"$1"
fi


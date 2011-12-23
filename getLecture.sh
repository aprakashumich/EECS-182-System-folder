#!/bin/sh
cd ~/System/
git pull

if [ -d ~/System/lecture/"$1" ]; then
    if [ ! -d ~/lecture/"$1" ]; then
	echo making directory ~/lecture/"$1"
	mkdir -p ~/lecture/"$1"
    fi
    cp -i -r lecture/$1/* ~/lecture/$1/     
    else
    echo there is no directory ~/System/lecture/"$1"
fi


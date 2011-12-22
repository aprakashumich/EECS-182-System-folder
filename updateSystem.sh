#!/bin/sh
cd ~/System; svn update
cd $HOME; cp -f viewme_original.py viewme.py
rm -rf ~/google_appengine
ln -sf ~/System/google_appengine ~/google_appengine
sleep 3

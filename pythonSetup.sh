#!/bin/sh
cd /usr/bin


#install curl
sudo apt-get install curl

#install distribute_setup
sudo curl http://python-distribute.org/distribute_setup.py | python2.5

# install pip
suo curl https://raw.github.com/pypa/pip/master/contrib/get-pip.py | python2.5

# pyflakes already installed, so skip this

# install appengine
cd ~/System
wget http://googleappengine.googlecode.com/files/google_appengine_1.6.1.zip
unzip google_appengine_1.6.1.zip
rm google_appengine_1.6.1.zip

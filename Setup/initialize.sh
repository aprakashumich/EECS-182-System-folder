#!/bin/bash
ln -sf ~/System/dotbashrc ~/.bashrc
rm -rf ~/.emacs.d
ln -sf ~/System/dotemacs.d ~/.emacs.d
ln -sf ~/System/README_EECS182.txt ~/README_EECS182.txt
ln -sf ~/System/README_FIRST.txt ~/README_FIRST.txt
ln -sf ~/System/updateSystem.sh ~/updateSystem.sh
ln -sf ~/System/viewme_original.py ~/viewme_original.py
cp ~/System/viewme_original.py ~/viewme.py
ln -sf ~/System/Demos_182 ~/Demos_182


if grep -q launchpad /etc/apt/sources.list
then
	echo "launchpad already in /etc/apt/sources.list"
else
	sudo sh -c "echo 'deb http://ppa.launchpad.net/fkrull/deadsnakes/ubuntu maverick main' >> /etc/apt/sources.list"
	sudo sh -c "echo 'deb-src http://ppa.launchpad.net/fkrull/deadsnakes/ubuntu maverick main' >> /etc/apt/sources.list"
fi
sudo apt-get update
sudo dpkg --clear-selections
sudo dpkg --set-selections < ~/System/Setup/installedpackages
sudo apt-get -u dselect-upgrade
sudo apt-get upgrade

# initialize python2.5 extras

pushd .
cd /tmp; wget http://pypi.python.org/packages/2.5/s/setuptools/setuptools-0.6c11-py2.5.egg; sudo sh /tmp/setuptools-0.6c11-py2.5egg; rm -f /tmp/setuptools-0.6c11-py2.5egg
popd 
sudo easy_install-2.5 pil

	
	


	

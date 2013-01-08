#!/bin/sh
mkdir ~/eecs182
fs setacl ~/eecs182 $USER all -clear
cd ~/eecs182
ln -s ~aprakash/Public/eecs182/System/README.xt .
git config --global http.sslVerify false
git clone https://github.com/aprakashumich/hw_182w13 Homeworks
echo "Your homework files are in eecs182/Homeworks folder. Follow the instructions in README.txt there"




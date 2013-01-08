#!/bin/sh
mkdir eecs182
fs setacl eecs182 $USER all -clear
cd eecs182
git pull https://github.com/aprakashumich/hw_182w13 Homeworks
echo "Your homework files are in eecs182/Homeworks folder. Follow the instructions in README.txt there"




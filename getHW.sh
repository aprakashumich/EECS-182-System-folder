#!/bin/sh
cd /home/me/System/
git pull origin master
cd Homeworks
for hwfolder in *
do
    if [ ! -d /home/me/Homeworks/"$hwfolder" ]; then
        echo making directory /home/me/Homeworks/"$hwfolder"
        mkdir -p /home/me/Homeworks/"$hwfolder"
    fi
    cp -i -r "$hwfolder"/* /home/me/Homeworks/"$hwfolder"/     
done

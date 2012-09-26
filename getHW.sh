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
    cp -i -u -r "$hwfolder"/* /home/me/Homeworks/"$hwfolder"/     
done

# Make another copy
for hwfolder in *
do
    if [ ! -d /home/me/Homeworks_OriginalVersion/"$hwfolder" ]; then
        echo making directory /home/me/Homeworks_OriginalVersion/"$hwfolder"
        mkdir -p /home/me/Homeworks_OriginalVersion/"$hwfolder"
    fi
    cp -f -u -r "$hwfolder"/* /home/me/Homeworks_OriginalVersion/"$hwfolder"/     
done

Welcome to EECS 182.

To get started, first do the following:

Open "me's Home" from the desktop by double-clicking it, if not
already open. This is your home folder. 

"me" is your username.  If you ever need the password, it is "eecs182".

Students: You should do all your work outside the System directory.

To pull new changes to the system when instructed, you will do:

% sh getupdates.sh

The Homeworks folder contains your homeworks. Follow the instructions
in README.txt when you start doing your homeworks.


This virtual machine is designed for EECS 182 use. 

The System folder contains the files to help configure the bash shell, 
emacs, and possibly other programs. Normally, you should not touch files in the 
System folder. To do an update, do the following:


Some useful terminal commands:

List contents of current folder (called directory in Linux)
% ls

Change to home directory:
% cd


Change to a subdirectory:
% cd subdirectory

E.g., to change to Homeworks folder from home, you can do:
% cd Homeworks

To get back to Home from anywhere:
% cd

To change to HW1 directory within Homework, you can do it in two steps::

% cd Homework
% cd HW1

Change to immediate parent directory:
% cd ..

Find where you are in the directory structure:
% pwd

opening a file for editing using the Emacs editor
% emacs filename

Reading a file on the terminal:
% more <filename>

Removing a file (no recovery possible):

% rm filename

Renaming a file:
% mv filename newfilename

Copying a file:
% cp filename newfilename

Copying an entire folder
% cp -r directoryname newdirectoryname

Logging into a remote computer on CAEN using command-line
% ssh loginlinux.engin.umich.edu  -l <userid>

Logging into a remote computer on ITD
% ssh login.itd.umich.edu -l <userid>

Copying a folder to a remove computer on ITD to the Private directory
% scp -r <directory> youruserid@sftp.itd.umich.edu:Private

Taking a screenshot:
Use 
Menu -> Accessories -> Take Screenshot


























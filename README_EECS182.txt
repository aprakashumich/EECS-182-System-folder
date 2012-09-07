Read README_FIRST.txt before this file to get started. Come back to
this file after you become more familiar with the environment and the
OS.

This virtual machine is designed for EECS 182 use. To facilitate basic
updates and configuration, a System folder contains the files to help
configure the bash shell, emacs, and possibly other
programs. Normally, you should not touch files in the System folder.

The following files are symbolic links to files in the System folder,
and thus can be remotely updated by 182 teaching staff:

    .bashrc: This configures your bash shell.  
    .emacs.d: This configures your emacs editor.

Normally, you do not want to permit remote updates to your system by
someone else. Here, however, the goal is to provide the instructors a way to
remotely maintain your machine (at your request only).

To do an update, do the following:

Open a terminal window (Menu -> Terminal). Run the following on the
prompt:

     cd ~/System
     git pull github182 master

This runs a program called git to pull updates to the above files from
a master repository.  (Later in the semester, you'll learn about git
for your own programs.) If you have edited files in the System
directory, you may need to resolve conflicts. For that reason, we urge
you not to edit any files in the System directory.

NOTE: This does not update OS software on the machine. Continue doing
normal OS updates, if you wish (optional). I believe Mint Linux will do that
automatically for you at times.






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
someone else. Here, the goal is to provide the instructors a way to
remotely maintain your machine (at your request only).

To do an update, do the following:

Open a terminal window (Menu -> Terminal). Run the following on the
prompt:

     updateSystem.sh

This runs a program called subversion to pull updates to the above
files from a master repository.  This should print something like the
following if there are no updates available:

	  At revision <somenumber>

Else, it would show you the files being updated.

NOTE: This does not update OS software on the machine. Continue doing
normal OS updates, if you wish. I believe Mint Linux will do that
automatically for you at times.

---------------------------------------------

DO NOT DO THE FOLLOWING UNLESS YOU WISH TO MAINTAIN YOURSELF. YOU WANT
TO USE THE VM FOR YOURSELF RATHER THAN FOR EECS 182.

If you wish to avoid receiving updates from the 182 repository and
maintain the bash, emacs and other files yourself.  You can unlink
from the 182 repository by doing the following:

Open a new terminal window (Menu -> Terminal). Type the following:

     cd System
     sh ./.deletesvn.sh

This should break the link between System folder and the instructor's
repository.  You can then modify the files in System or elsewhere
yourself.






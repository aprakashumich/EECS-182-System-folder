Welcome to EECS 182.  

We will be making frequent use of Terminal app.  Try the following out. 

List contents of current folder (called directory in Linux)
% ls

Find where you are in the directory structure:
% pwd

Change to home directory:
% cd

Change to a subdirectory:
% cd SUBDIRECTORY_NAME

Check where you are using pwd.

E.g., to change to Homeworks folder from home, you can do:
% cd eecs182
% cd Homeworks

Check where you are using pwd.

To get back to Home from anywhere:
% cd

Confirm that you are in your home directory using pwd or ls.

To change to HW1 directory within Homeworks, you can do it in two steps:

% cd eecs182
% cd Homeworks
% cd HW1

Or using one step (first go back to home):
% cd eecs182/Homeworks/HW1

To change to immediate parent directory:
% cd ..

Confirm that you are now in Homeworks folder.

Go back to home
% cd

Create a dummy directory for testing
% mkdir tempdir

Go into that:
% cd tempdir

Edit a file using the Emacs editor
% emacs myfile.txt

Write some content there and save the file from within Emacs.

Reading a file on the terminal:
% more myfile.txt

Copy the file:
% cp myfile.txt myfile2.txt

Confirm the copy by using the "ls" command.

Remove the copied file (no recovery possible):

% rm myfile2.txt

Logging into a remote computer on CAEN using command-line
% ssh loginlinux.engin.umich.edu  -l <userid>

Logging into a remote computer on ITD
% ssh login.itd.umich.edu -l <userid>

Taking a screenshot: Use Menu -> Accessories -> Take Screenshot 


























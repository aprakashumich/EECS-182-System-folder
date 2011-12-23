# This file, with a .py extension, contains a python program
# Lines that start with the hash sign are ignored by Python. They are
# used for comments.

# Step 1: To run this program, in a terminal window, type "python2.5
# viewme.py" (at the bottom of the screen do: Menu->Terminal). You can
# open a different terminal window if your first window is running the
# emacs command.

# If you're editing this file in emacs, and you want to get rid of the
# split window, go to the menus at the top, File -> Remove Splits

def hello():
    print "-----------------------------------------------------"
    print "Welcome to EECS 182"
    print "I hope you enjoy the class."
    print "Practice using the emacs editor with this file"
    print "If you mess up the file, you can alway restore it by executing"
    print "cp ~/System/first_program.py ~/first_program.py"
    print "\n"
    print "To get started with editing, in a terminal window enter the command"
    print "emacs first_program.py"
    print "-----------------------------------------------------"
    print "\n"   	# print a newline to create a blank line


hello()
print "\n .... Let's say that again...  \n"
hello()

# Step 2: Now, Try deleting the second hello() (or just adding # at
# the beginning of its line, to comment it out. Save the file.  Run
# the program again to see the results.  Try control-f (forward),
# control-n (next), control-p (previous), control-b (back) control-v
# (view one screen forward), esc-v or alt-v (one screen back) to
# practice navigating around the screen using keyboard shortcuts.

# Note: If something strange occurs that you don't like, hit
# control-g. That tells emacs to quit what it was doing. If that
# doesn't work, hit the ESC key 3 times.

# Step 3: Now, insert "hello()" back into the editor buffer below this
# line.  Save the file. Run ipython to see the results. You will
# notice that as you are typing the letters of "hello", the editor
# presents you auto-complete choices. Some of the the choices other
# than the word "hello" are in-built python variables. You will find
# this convenient later.

# Step 4: Now, let's try the undo features of the emacs editor. Invoke
# undo from the menu. There is a keyboard short-cut for that too, but
# it is probably easier from the menu. You can repeatedly do this to
# keep undoing stuff.

# Step 5: Now, let's try the redo features. Type "Esc-x". You will a
# M-x (or Meta-x) appear at the bottom of the screen. At this point
# emacs is waiting for a command.  type "redo". You can repeat the
# process any number of times.

# You can get by with just that much knowledge of the keyboard
# commands in emacs, plus extensive use of the menus at the top. But
# if you're willing to invest an hour or two in really learning to use
# the editor, you'll find it will pay great dividends later. Try
# Running Help -> Emacs Tutorial

# There is a lot more to learn, such as running Python from within
# emacs, etc.  But this is a good start!







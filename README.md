# ReadWriteCreateFile
Using a Linux based virtual machine to run a program that creates, reads and writes a file
Date: 4/22/2016 
Author: Michael Blackley
Purpose: The file_creator.cpp code includes asking the user to enter a file name (without spaces), asks
the user what permissions (read,write,execute) they want to assign to the "owner" class of users and also
attempts to create a new file in the current directory (using the creat system call) with the file name 
specified by the user, permissions specified by the user assigned to the "owner" class of users" and no 
permissions to any other class of users. Finally, the file_creater.cpp displays an error message if file
creation is unsuccessful

For the file_writer.cpp:
Asks the user to enter a file name (without spaces)
Attempts to open the file with the name specified by the user (using the open system call) in write only mode
Displays an error message and quits the program if file open is unsuccessful
If the file open is successful, it asks the user to enter a string (with no spaces) to write into the file,
writes the string specified by the user to the file (using the write system call), and closes the file 
(using the close system call)

For the file_reader.cpp:
Asks the user to enter a file name (without spaces)
Attempts to open the file with the name specified by the user (using the open system call) in read only mode
Displays an error message and quits the program if file open is unsuccessful 
If file open is successful, 
it attempts to read the first 10 characters (using the read system call, which automatically stops if the endo f
the file is reached before the specified number of characters) into an array,
Displays the characters read on the console,
Closes the file (using the close system call)

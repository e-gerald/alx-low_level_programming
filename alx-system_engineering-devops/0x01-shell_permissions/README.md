THE FOLLOWING FILES CONTAIN EXECUTABLE COMMANDS FOR GRANTING SHELL PERMISSIONS

The su command switch surrent user to another specified user

The whoami or id -un command prints the effective username of the current user

The id -Gn command prints all the groups the current user is part of

The sudo chown command changes the ownership of a specific file

The touch command creates an empty file

The chmod u+x command grants user execution permission to a file

The chmod 754 command grants executable permission to the owner and user but grant read permission to others.

The chmod a+x command grants executable permssion to all users.

The chmod 007 command grants no permission to both user and group but grants executable permission to others.

The chmod 753 command set the mode -rwxr-x-wx 

The chmod --reference=<file> <file> mirrow the permission of both files.

The chmod a+X * command adds executable permission to subdirectory of current directory for all users without affecting regular files

The mkdir -m 751 <dir> command creates a directory with permissions on one line.

The sudo chgrp <new-owner> <file> changes group ownership of a file

The chown -R <owner>:<group> * command changes owner and group for all files and directory.

The chown -h <owner>:<group> <file> of a symbolic link. The -h flag prevents a following.

The chown -R --from=<owner> <newowner> <file> command will change ownership only if the name matches 'from'.

The command telnet + host will play Starwars on the terminal.

# Simple Shell

This is a simple shell written in C. It can be used to execute commands, such as `ls`, `cd`, and `pwd`.

## Commands

The simple shell supports the following commands:

-   `cd`: Change directory.
-   `ls`: List the contents of a directory.
-   `pwd`: Print the current working directory.
-   `exit`: Exit the shell.
-   `env`: Print the current environment.
-  and many more linux commands.


## Debugging

If you encounter any problems with the simple shell, you can use the `-d` flag to enable debugging mode. This will print additional information to the console, which can help you track down the source of the problem.

## Building

To build the simple shell, you will need to have a C compiler installed. Once you have a compiler, you can build the shell by running the following command:

    gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o shell


## Running

The simple shell can be run using the following command:

    ./shell


## Additional Features

The simple shell also supports the following additional features:

-   Handling of command lines with arguments.
-   Handling of the PATH environment variable.
-   Implementation of the  `exit`  built-in, which exits the shell.
-   Implementation of the  `env`  built-in, which prints the current environment.

## Authors

-   Younes Bensbahou
-   Salah-Eddine EL MARRHOUB


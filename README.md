# text-file-counter
This was an assignment in our Programming module in First Year.

My original assignment was in one file, but I have separated it into three more modular files.
I also compiled it using the command line, so I removed the `#include "stdafx.h"` that Visual Studio requires.

I additionally slightly changed three methods to make them return the number instead of print the number.
This would make them more extensible and more preferable in a real-world program.

## Assignment Description
>- You are to write a program that process a text file and does different analysis, depending on the command line options selected
>- Your program must accept command line arguments
>- You would run your program as follows for example:
>
>        assignment.exe c:\\results.txt /s /l /c
>- Where the input file path is the first argument, and the following optional arguments are input in any order:
>    - `/l` – to get the number of lines in the file
>    - `/s` – to get the size in bytes of the file
>    - `/c` – to get the number of characters (not including newline characters) in the file

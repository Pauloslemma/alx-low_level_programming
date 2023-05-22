# 0x15. C - File I/O

<h2>Learning Objectives</h2>

<p>
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:
</p>

<ul>
    <li>Look for the right source of information online</li>
    <li>How to create, open, close, read and write files</li>
    <li>What are file descriptors</li>
    <li>What are the 3 standard file descriptors, what are their purpose and what are their POSIX names</li>
    <li>How to use the I/O system calls open, close, read and write</li>
    <li>What are and how to use the flags O_RDONLY, O_WRONLY, O_RDWR</li>
    <li>What are file permissions, and how to set them when creating a file with the open system call</li>
    <li>What is a system call</li>
    <li>What is the difference between a function and a system call</li>
</ul>

<h2>Requirements</h2>

<p>
General requirements for this project include:
</p>

<ul>
    <li>Allowed editors: vi, vim, emacs</li>
    <li>All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89</li>
    <li>All your files should end with a new line</li>
    <li>A README.md file, at the root of the folder of the project is mandatory</li>
    <li>Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl</li>
    <li>You are not allowed to use global variables</li>
    <li>No more than 5 functions per file</li>
    <li>The only C standard library functions allowed are malloc, free and exit. Any use of functions like printf, puts, calloc, realloc etc… is forbidden</li>
    <li>Allowed syscalls: read, write, open, close</li>
    <li>You are allowed to use _putchar</li>
    <li>You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account</li>
    <li>The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h</li>
    <li>Don’t forget to push your header file</li>
    <li>All your header files should be</li>
</ul>

<p>
<b>Tip:</b> Always prefer using symbolic constants (POSIX) vs numbers when it makes sense. For instance read(STDIN_FILENO,
</p>


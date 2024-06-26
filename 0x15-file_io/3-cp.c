#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#define BUFSIZE 1024
/**
* error_exit - Print error message and exit with specific code
* @exit_code: The exit code
* @msg: The error message
*/
void error_exit(int exit_code, char *msg)
{
dprintf(STDERR_FILENO, "%s\n", msg);
exit(exit_code);
}
int main(int argc, char **argv)
{
int fd_from, fd_to, r, w;
char buf[BUFSIZE];
if (argc != 3)
error_exit(97, "Usage: cp file_from file_to");
fd_from = open(argv[1], O_RDONLY);
if (fd_from == -1)
error_exit(98, "Error: Can't read from file");
fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (fd_to == -1)
error_exit(99, "Error: Can't write to file");
while ((r = read(fd_from, buf, BUFSIZE)) > 0)
{
w = write(fd_to, buf, r);
if (w == -1 || w != r)
error_exit(99, "Error: Write error to file");
}
if (r == -1)
error_exit(98, "Error: Read error from file");
if (close(fd_from) == -1)
error_exit(100, "Error: Can't close file descriptor");
if (close(fd_to) == -1)
error_exit(100, "Error: Can't close file descriptor");
return (0);
}


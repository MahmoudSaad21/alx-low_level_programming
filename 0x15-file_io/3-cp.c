#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
/**
*_97 - error 97
*Return: nothing
*/
void _97(void)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
/**
*_98 - error 98
*@argv: An array of pointers to the arguments
*Return: nothing
*/
void _98(char *argv[])
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
/**
*_99 - error 99
*@argv: An array of pointers to the arguments
*Return: nothing
*/
void _99(char *argv[])
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}
/**
*_100 - error 100
*@fd: the file
*Return: nothing
*/
void _100(int fd)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
exit(100);
}
/**
*main - The entry point of the program
*@argc: The number of arguments passed to the program
*@argv: An array of pointers to the arguments
*Return: 0 on success, or an exit code on failure
*/
int main(int argc, char *argv[])
{
int fd_from, fd_to, read_size, write_size;
char buffer[1024];
if (argc != 3)
_97();
fd_from = open(argv[1], O_RDONLY);
if (fd_from == -1)
_98(argv);
fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (fd_to == -1)
_99(argv);
while ((read_size = read(fd_from, buffer, 1024)) > 0)
{
write_size = write(fd_to, buffer, read_size);
if (write_size != read_size)
_99(argv);
}
if (read_size == -1)
_98(argv);
if (close(fd_from) == -1)
_100(fd_from);
if (close(fd_to) == -1)
_100(fd_to);
return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
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
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
fd_from = open(argv[1], O_RDONLY);
if (fd_from == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (fd_to == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}
while ((read_size = read(fd_from, buffer, 1024)) > 0)
{
write_size = write(fd_to, buffer, read_size);
if (write_size != read_size)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}
}
if (read_size == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
if (close(fd_from) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
exit(100);
}
if (close(fd_to) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
exit(100);
}
return 0;
}

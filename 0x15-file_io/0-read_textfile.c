#include "main.h"
/**
*read_textfile - Reads a text file and prints it to the POSIX
*@filename: Name of the file to read
*@letters: Number of letters to read and print
*Return: The actual number of letters read and printed, or 0
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
int f;
ssize_t bytes_read, bytes_written;
char *buf;
if (!filename)
return (0);
buf = malloc(sizeof(char) * letters);
if (!buf)
return (0);
f = open(filename, O_RDONLY);
if (f == -1)
{
free(buf);
return (0);
}
bytes_read = read(f, buf, letters);
bytes_written = write(STDOUT_FILENO, buf, bytes_read);
if (bytes_read == -1 ||bytes_written == -1 || bytes_written != bytes_read)
{
free(buf);
close(f);
return (0);
}
free(buf);
close(f);
return (bytes_read);
}

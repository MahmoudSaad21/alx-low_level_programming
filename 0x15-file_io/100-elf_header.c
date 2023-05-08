#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>
/**
*print_error - print an error message to stderr and exit with status 98
*@message: the error message to print
*/
void print_error(const char *message)
{
fprintf(stderr, "Error: %s\n", message);
exit(98);
}
void print_elf_header(const Elf64_Ehdr *header)
{
printf("ELF Header:\n");
printf("  Magic:   ");
for (int i = 0; i < EI_NIDENT; i++)
printf("%02x ", header->e_ident[i]);
printf("\n");
printf("  Class:                             %s\n", header->e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "unknown");
printf("  Data:                              %s\n", header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "unknown");
printf("  Version:                           %d (current)\n", header->e_ident[EI_VERSION]);
printf("  OS/ABI:                            %s\n", header->e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX - System V" : "unknown");
printf("  ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);
printf("  Type:                              %s\n", header->e_type == ET_EXEC ? "EXEC (Executable file)" : "unknown");
printf("  Entry point address:               %lx\n", header->e_entry);
printf("\n");
}
/**
*main - The entry point of the program
*@argc: The number of arguments passed to the program
*@argv: An array of pointers to the arguments
*Return: 0 on success, or an exit code on failure
*/
int main(int argc, char **argv)
{
if (argc != 2)
print_error("Usage: elf_header elf_filename");
int fd = open(argv[1], O_RDONLY);
if (fd < 0)
print_error("Cannot open file");
char buffer[64];
int bytes_read = read(fd, buffer, 64);
if (bytes_read < sizeof(Elf64_Ehdr))
print_error("Invalid ELF file");
Elf64_Ehdr *header = (Elf64_Ehdr *) buffer;
if (memcmp(header->e_ident, ELFMAG, SELFMAG) != 0)
print_error("Invalid ELF file");
print_elf_header(header);
close(fd);
return (0);
}

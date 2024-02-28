#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>
#include <string.h>
#define BUF_SIZE 128
/* Print error message to stderr and exit with status 98 */
void print_error(const char *msg)
{
fprintf(stderr, "%s\n", msg);
exit(98);
}
/* Print information from the ELF header */
void print_elf_header_info(Elf64_Ehdr *header)
{
printf("ELF Header:\n");
printf("Magic:");
for (int i = 0; i < EI_NIDENT; i++)
printf("%02x%c", header->e_ident[i], i + 1 < EI_NIDENT ? ' ' : '\n');
printf("Class:%s\n",
header->e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");
printf("Data:%s\n",
header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
printf("Version:%d (current)\n", header->e_ident[EI_VERSION]);
printf("OS/ABI:%s\n",
header->e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX - System V" : 
(header->e_ident[EI_OSABI] == ELFOSABI_NETBSD ? "UNIX - NetBSD" : 
(header->e_ident[EI_OSABI] == ELFOSABI_SOLARIS ? "UNIX - Solaris" : "<unknown>")));
printf("ABI Version:%d\n", header->e_ident[EI_ABIVERSION]);
printf("Type:%s\n",
header->e_type == ET_EXEC ? "EXEC (Executable file)" : 
(header->e_type == ET_DYN ? "DYN (Shared object file)" : "<unknown>"));
printf("Entry point address:%#lx\n", header->e_entry);
}
/* Main function */
int main(int argc, char *argv[])
{
if (argc != 2)
{
print_error("Usage: elf_header elf_filename");
}
const char *filename = argv[1];
int fd = open(filename, O_RDONLY);
if (fd == -1)
{
print_error("Error: Unable to open file");
}
Elf64_Ehdr header;
ssize_t bytes_read = read(fd, &header, sizeof(header));
if (bytes_read == -1 || bytes_read != sizeof(header))
{
print_error("Error: Unable to read ELF header");
}
if (memcmp(header.e_ident, ELFMAG, SELFMAG) != 0)
{
print_error("Error: Not an ELF file");
}
print_elf_header_info(&header);
close(fd);
return (0);
}


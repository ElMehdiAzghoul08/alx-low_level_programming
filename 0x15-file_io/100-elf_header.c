#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>
#include <string.h>
/**
 * lets_print_the_error - a function
 * @contxt: input
 * Return: void
 */
void lets_print_the_error(const char *contxt)
{
	fprintf(stderr, "%s\n", contxt);
	exit(98);
}
/**
 * lets_print_magic_and_ELFHEADER - a function
 * @name_of_file: input
 * Return: void
 */
void lets_print_magic_and_ELFHEADER(const char *name_of_file)
{
	int i;
	int file_descriptor;
	Elf64_Ehdr elf_header;

	file_descriptor = open(name_of_file, O_RDONLY);
	if (file_descriptor == -1)
		lets_print_the_error("Error opening file");

	if (read(file_descriptor, &elf_header, sizeof(Elf64_Ehdr)) == -1)
		lets_print_the_error("Error reading ELF header");

	if (memcmp(elf_header.e_ident, ELFMAG, SELFMAG) != 0)
		lets_print_the_error("Not an ELF file");

	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x ", elf_header.e_ident[i]);
	printf("\n");
	printf("  Class:                             %s\n",
			elf_header.e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");
	printf("  Data:                              %s\n",
			elf_header.e_ident[EI_DATA] == ELFDATA2LSB ?
			"2's complement, little endian" : "Unknown");
	printf("  Version:                           %d (current)\n",
			elf_header.e_ident[EI_VERSION]);
	printf("  OS/ABI:                            %s\n",
			elf_header.e_ident[EI_OSABI] == ELFOSABI_SYSV ?
			"UNIX - System V" : "Unknown");
	printf("  ABI Version:                       %d\n",
			elf_header.e_ident[EI_ABIVERSION]);
	printf("  Type:                              %s\n",
			elf_header.e_type == ET_EXEC ? "EXEC (Executable file)" : "Unknown");
	printf("  Entry point address:               0x%lx\n",
			(unsigned long)elf_header.e_entry);

	close(file_descriptor);
}
/**
 * main - a function
 * @argc: input
 * @argv: input
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		return (98);
	}

	lets_print_magic_and_ELFHEADER(argv[1]);

	return (0);
}

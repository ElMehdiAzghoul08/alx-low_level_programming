#include <elf.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define _SIZE_of_B 64

/**
 * error_to_print - a function to print error messages and exit
 * @context: input error message
 * Return: void
 */
void error_to_print(const char *context)
{
	dprintf(STDERR_FILENO, "%s\n", context);
	exit(98);
}

/**
 * lets_print_magic_and_ELFHEADER - a function to print ELF header information
 * @hr: input ELF header
 * Return: void
 */
void lets_print_magic_and_ELFHEADER(const Elf64_Ehdr *hr)
{
	int a;

	printf("ELF Header:\n  Magic:   ");
	for (a = 0; a < EI_NIDENT; ++a)
	{
		printf("%02x ", hr->e_ident[a]);
	} printf("\n");

	printf("  Class:                             ");
	switch (hr->e_ident[EI_CLASS])
	{
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("<unknown>\n");
			break;
	} printf("  Data:                              ");
	switch (hr->e_ident[EI_DATA])
	{
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("<unknown>\n");
			break;
	}
	printf("  Version:                           %u (current)\n",
			hr->e_ident[EI_VERSION]);
	printf("  OS/ABI:                            %u\n",
			hr->e_ident[EI_OSABI]);
	printf("  ABI Version:                       %u\n",
			hr->e_ident[EI_ABIVERSION]);
}

/**
 * lets_print_type - a function to print ELF type information
 * @hr: input ELF header
 * Return: void
 */
void lets_print_type(const Elf64_Ehdr *hr)
{
	printf("  Type:                              ");
	switch (hr->e_type)
	{
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		default:
			printf("<unknown>\n");
			break;
	}

	printf("  Entry point address:               0x%lx\n",
			(unsigned long)hr->e_entry);
}

/**
 * main - the main function
 * @argc: number of command-line arguments
 * @argv: array of command-line arguments
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
	int description_ofthe_file;
	Elf64_Ehdr hr;

	if (argc != 2)
	{
		error_to_print("Usage: elf_header elf_filename");
	}

	description_ofthe_file = open(argv[1], O_RDONLY);
	if (description_ofthe_file == -1)
	{
		error_to_print("Error: Can't open file");
	}

	if (read(description_ofthe_file, &hr, sizeof(hr)) != sizeof(hr))
	{
		error_to_print("Error: Can't read ELF header");
	}

	close(description_ofthe_file);

	lets_print_magic_and_ELFHEADER(&hr);
	lets_print_type(&hr);

	return (0);
}

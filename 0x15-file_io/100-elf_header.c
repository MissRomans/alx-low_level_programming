#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <sys/stat.h>
#include <elf.h>

void check_elf(unsigned char *c_ident);
void print_magic(unsigned char *e_ident);
void print_version(unsigned char *e_ident);
void close_elf(int elf);

/**
 * main - 
 * @b: first integer
 * Return: Always 0
 */

int main(void)
{ 
	
	printf("an ELF file and if not prints exit code 98");

	return (0);
}


/**
 * check_elf - Checks whether a file is an ELF file
 * @e_ident: An array containing the ELF magic numbers
 * Description: if file is not an ELF file - exit code 98
 */

void check_elf(unsigned char *e_ident)
{
	int index;

	for (index = 0; index < 4; index++)
	{
		if (e_ident[index] != 127 &&
			e_ident[index] != 'E' &&
			e_ident[index] != 'L' &&
			e_ident[index] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * print_magic - Prints magic numbers of an ELF header
 * @e_ident: Pointer to an array containing the ELF magic numbers
 * Description: magic numbers are separated by spaces
 */

void print_magic(unsigned char *e_ident)
{
	int index;

	printf("  Magic:  ");

	for (index = 0; index < EI_NIDENT; index++)
	{
		printf("%02x", e_ident[index]);
		if (index == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * print_version _ Prints the version of an ELF header
 * @e_ident: pointer to an array containing the ELF version
 */

void print_version(unsigned char *e_ident)
{
	printf("   Version:                  %d",
		e_ident[EI_VERSION]);
	switch (e_ident[EI_VERSION])
	{
	case EV_CURRENT:
		printf("   (current)\n");
		break;
	default:
		printf("\n");
		break;
	}
}

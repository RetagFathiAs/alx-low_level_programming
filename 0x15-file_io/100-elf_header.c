#include <stdio.h>
#include <elf.h>

/**
 * get_type - determine type
 * @ehdr: pointer to struct
 */
void get_type(Elf64_Ehdr *ehdr)
{
	printf("%-35s", "Type:");
	switch (ehdr->e_type)
	{
	case ET_NONE:
		printf("NONE (Unknown type)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	}
}

/**
 * main - entry point for of ELF file
 * @argc: arg of count
 * @argv: arg of array
 *
 * Return: 1 on success, error
 */
int main(int argc, char *argv[])
{
	printf("argc:%d, argv:%p\n", argc, (void *)*argv);
	return (1);
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * main - This program reads the contents the ELF
 * header at the start of an ELF file
 * @argc: The number of arguments.
 * @argv: The arguments
 * Return: returns 0 on sucess
 * else exit with staus code 98
 * display an error message to stderr
 *
 */

int main(int argc, char *argv[])
{

	ssize_t size;
	char buff[5];
	char elf[1];
	int fold;


	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: cp file\n");
		exit(97); 
	}

	fold = open(argv[1], O_RDWR);
	
	if (fold == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't open from file %s\n", argv[1]);
		exit(98); 
	}

	size = read(fold, buff, 4);
	
	if (size == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98); 
	}

	size = lseek(fold, 1, SEEK_SET);
	size = read(fold, elf, 1);
	if (elf[0] != 'E')
		exit(98);

	close(foldd);
	return (0);
}

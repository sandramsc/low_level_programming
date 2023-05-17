#include <stdio.h>
/*
 * main - This program prints the name of 
 * the executable file followed by a new line.
 * If the name of the file is changed, the program will print the new name
 * without having to recompile the program.
 */
int main(int argc, char *argv[])
{
	/*To suppress unused parameter warning*/
	(void)argc;

	/*Prints program name*/
	printf("%s\n", argv[0]);
	return (0);
}

#include "main.h"
#include <string.h>
#include <unistd.h>

/**
* print_chessboard - A program that prints the sum of the two
* diagonals of a square matrix of integers
* @a: pointer to the first element of the matrix
* @sum1: first diagonal
* @sum2: second diagonal
* @size: matrix size
* Return: nothing
*/

void print_diagsums(int *a, int size)
{
	/* initialize two sums to zero */
	int sum1 = 0;
	int sum2 = 0;
	char buf[20];
	int i;

	/* iterate over the rows of the matrix */
	for (i = 0; i < size; i++)
	{
	/* add element on diagonal from top left to bottom right to sum1 */
	sum1 += *(a + i * size + i);
	/*add element on diagonal from top right to bottom left to sum2 */
	sum2 += *(a + i * size + (size - i - 1));
	}
	/* Print the sums using sprintf() */
	sprintf(buf, "%d, %d\n", sum1, sum2);
	write(STDOUT_FILENO, buf, strlen(buf));
}

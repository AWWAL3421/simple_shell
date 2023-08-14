#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: Subtract two numbers and print the result
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num1, num2;

	num1 = 15;
	num2 = 10;

	printf("The result of subtracting %d from %d is %d\n", num2, num1, (num1 - num2));

	return (0);
}

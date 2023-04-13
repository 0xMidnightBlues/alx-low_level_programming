#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make
 * change for an amount of money.
 * @argc: argument count
 * @argv: arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int	num, i, amount = 0;
	int	coins[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	if (num <= 0)
	{
		printf("0\n");
		return (0);
	}
	i = 0;
	while (num != 0)
	{
		if (num >= coins[i])
		{
			num -= coins[i];
			amount++;
		}
		else
			i++;
	}
	printf("%d\n", amount);
	return (0);
}

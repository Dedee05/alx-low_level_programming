#include <stdio.h>

/**
 * main - prints alphabet in lowercase and uppercase.
 *
 * Return: Always 0
 */
int main(void)
{
	char bet[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
		int a;

	for (a = 0; a < 52; a++)
	{
		putchar(bet[a]);
	}
	putchar('\n');
	return (0);
}

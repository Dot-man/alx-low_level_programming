#include<unistd.h>

/**
 * main - Entry point
 *
 * Description: this program is print some words
 *
 * Return: 1 (Unsuccess)
 */

int main(void)
{	char quo[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, quo, 59);
	return (1);
}

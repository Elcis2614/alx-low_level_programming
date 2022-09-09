/*comment*/
#include <stdio.h>
#include <string.h>
/**
 * main -  entry point
 *
 * Return: Always 0 (succes)
 */
int main(void)
{
	char my_array[31] = "and that piece of art is useful";
	char my_arrayT[28] = "\" - Dora Korpar, 2015-10-19\n";

	strncat(my_array, my_arrayT, 28);
	fwrite(my_array, 59, sizeof(char), stderr);
	return (0);
}

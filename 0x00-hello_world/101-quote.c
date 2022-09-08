/*comment*/
#include <stdio.h>
/**
 * main -  entry point
 *
 * Return: Always 0 (succes)
 */
int main(void)
{
	int my_array[58] = "\"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fwrite(my_array, 58, sizeof(char), stderr);
	return (0);
}

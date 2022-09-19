/**
 *_strlen -  return the size of a string
 *
 *@s: the character
 *Return: the legnth
 */
int _strlen(char *s)
{
	int x;

	x = 0;
	while (*s)
	{
		x++;
		s++;
	}
	return (x);
}

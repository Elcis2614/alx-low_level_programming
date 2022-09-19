/**
 * swap_int - swap values of two ints
 *
 * @a: first value
 * @b: second value
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}

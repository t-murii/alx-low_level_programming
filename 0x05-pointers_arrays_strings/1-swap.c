/**
 * swap_int - swaps the values of two integers
 *
 * @a: input parameter 1
 * @b: input parameter 2
 * temp: ariable for swapping
 * 
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

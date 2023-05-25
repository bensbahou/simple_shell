#include "main.h"

/**
 * getdigits - gets digits
 * @n: variable to get digits from
 *
 * return : void
 */
void getdigits(int n)
{
	char c;

	if (n > 0)
		getdigits((n / 10));
	if (n)
	{
		c = '0' + (n % 10);
		write(1, &c, 1);
	}
}

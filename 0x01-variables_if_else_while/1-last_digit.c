#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
    int r = n % 10;
    if (r < 6 && r != 0) printf ("Last digit of %d is %d and is less than 6 and not 0", n, r);
    else if (r > 5) printf("Last digit of %d is %d and is greater than 5", n, r);
    else printf("Last digit of %d is %d and is 0", n, r);

	return (0);
}
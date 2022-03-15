#include <stdio.h>
#include <time.h>
/**
 * more headers goes here
 * more
 * return 0 is succes
 * told
 */
int main(void)
{
int n;
srand(time(0));
/* your code goes here*/

n = rand() - RAND_MAX / 2;
	if (n > 0)
	printf("%d is positive", n);
	else if (n < 0)
	printf("%d is negative", n);
	else
	printf("%d is zero", n);
	return (0);
}

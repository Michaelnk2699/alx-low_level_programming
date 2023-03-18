#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdlib.h>
/* betty style doc for function main goes there */
/**
 * main - main function
 *
 * Return: always 0
 */
int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	m = n % 10;
	if (m > 5)
		printf("Last digit of %d is %d is greater than 5", n, m);
	else if (m == 0)
		printf("Last digit of %d is %d is 0", n, m); |
	else if (m < 6 && m != 0)
		printf("Last digiit of %d is %d and is less than 6 and 0", n, m);
	printf("/");

	return (0);
}


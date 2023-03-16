#include <stdio.h>

/**
* You should produce the exact same output as in the example
* Warnings are allowed
*
* Your program should return 0
*/
int main(void)
{
	char c;
	int i;
	long li;
	long long lli;
	float f;

	printf("Size of a char: %ld byte(s)\n", sizeof(c));
	printf("Size of a int: %ld byte(s)\n", sizeof(i));
	printf("Size of a long: %ld byte(s)\n", sizeof(li));
	printf("Size of a long long: %ld byte(s)\n", sizeof(lli));
	printf("Size of a float: %ld byte(s)\n", sizeof(f));
	return (0);
}

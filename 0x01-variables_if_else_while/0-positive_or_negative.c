#include <stdio.h>
int main(void)
{
	double num;
	printf("n: ");
	scanf("%if", &n);
	if (n > 0.00)
		printf("is positive);
	else if (n < 0.00)
		printf("is negative);
	else
		printf("is zero);
	return 0;
}

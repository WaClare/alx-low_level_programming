#include <stdio.h>
int main(void)
{
	double num;
	printf("Enter a number: ");
	scanf("%if", &num);
	if (num > 0.00)
		printf("is positive);
	else if (num<0.00)
		printf("is negative);
	else
		printf("is zero);
	return 0;
}

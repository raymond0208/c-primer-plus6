#include <stdio.h>

void larger_of(double * a, double  * b);

int main(void)
{
	double a, b;

	printf("Please enter two numbers: ");
	scanf("%lf %lf", &a, &b);
	larger_of(&a, &b);
	printf("The reset of the two numbers are: %lf %lf.\n", a, b);

	return 0;
}

void larger_of(double * a, double * b)
{
	if (*a > *b)
			*b = *a;
	else
			*a = *b;
}
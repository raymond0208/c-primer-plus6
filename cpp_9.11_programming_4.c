#include <stdio.h>

double harmonic_mean(double a, double b);

int main(void)
{
	double a, b;

	printf("Please enter two double numbers:");
/*	while (scanf("%lf %lf", &a, &b) == 2)
	{
		//printf("The harmonic average is: %lf\n", harmonic_mean(a, b));
		printf("The harmonic mean of %lf and %lf is %lf.\n", a, b, harmonic_mean(a, b));
		printf("\nNext two numbers (# to quit): ");
	}*/

	scanf("%lf %lf", &a, &b); //在scan中的两个double的通配符%lf和%lf之间，不能有标点。否则会导致无法获取全部的键盘输入

	printf("The harmonic mean of %lf and %lf is %lf.\n", a, b, harmonic_mean(a, b)); 

	printf("Bye!\n");

	return 0;
}

double harmonic_mean(double a, double b)
{
	return 1 / ((1 / a + 1 / b) / 2);
}

/*double harmonic_mean(double i, double j);

int main(void)
{
	double i, j;
	
	printf("Please enter two numbers: ");
	while (scanf("%lf %lf", &i, &j) == 2)
	{
		printf("The harmonic mean of %lf and %lf is %lf.\n", i, j, harmonic_mean(i, j));
		printf("\nNext two numbers (# to quit): ");
	}
	
	printf("Bye!\n");
	
	return 0;
}

double harmonic_mean(double i, double j)
{
	return 1 / ((1 / i + 1 / j) / 2);
}*/
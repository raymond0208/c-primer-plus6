#include <stdio.h>

double min(double x, double y);

int main(void)
{
	double x, y;

	
	printf("Please enter two numbers (q to quit): ");
	while (scanf("%lf %lf", &x, &y) == 2)
	{
		printf("the smaller one is %lf.\n", min(x,y));
		printf("the next two numbers (q to quit): ");
	}

	printf("See you!\n");

	//printf("%lf.\n", min(10.000000, 20.000000));

	return 0;
}

double min(double a, double b)
{
	/*if (x > y)
		return x;
	else
		return y;*/

	return a < b ? a : b;

}
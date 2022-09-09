#include <stdio.h>

void function(double *i, double *j, double *k);

int main(void)
{
	double i, j, k;

	printf("Please enter three numbers: ");
	while (scanf("%lf %lf %lf", &i, &j, &k) == 3 )
	{
		function(&i, &j, &k);
		printf("The smallest to biggest are: %lf %lf %lf.\n", i, j, k);
		printf("Please enter next three numbers (# to quit): ");
	}

	printf("Bye!\n");

	return 0;

}


void function(double *i, double *j, double *k)
{
	double temp;
	//double i, j, k;

	if (*i > *j)
	{
		temp = *j;
		*j = *i;
		*i = temp;
	}

	if (*j > *k)
	{
		temp = *k;
		*k = *j;
		*j = temp;
	

		if (*i > *j)
		{
			temp = *j;
			*j = *i;
			*i = temp;
		}
	}
}
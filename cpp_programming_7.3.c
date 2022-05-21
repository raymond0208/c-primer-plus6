#include <stdio.h>

int main(void)
{
	int input, even_ct, odd_ct;
	double even_total, odd_total;
	//float even_avg, odd_avg;
	even_ct = odd_ct = 0;
	even_total = odd_total = 0.0;


	printf("Enter the integers: \n");
	while (1)
	{
		scanf("%d", &input);
		if(input == 0)
			break;
		if (input % 2 == 0)
			{
				even_ct++;
				even_total += input;
			}
		else 
			{
				odd_ct++;
				odd_total += input;
			}

	//even_avg = even_total / even_ct;
	//odd_avg = odd_total / odd_ct;
	}

	printf("The number of even integers is: %d\n", even_ct);
	printf("The number of odd integers is: %d\n", odd_ct);
	printf("The average value of even integers is: %.2f\n", even_total/even_ct);
	printf("The average value of odd integers is: %.2f\n", odd_total/odd_ct);

	return 0;
}
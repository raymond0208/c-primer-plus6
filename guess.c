#include <stdio.h>
int main(void)
{
	int guess = 1;

	printf("Pick an integer from 1 to 100. I will try to guess.\n");
	printf("Un... is your number %d?\n", guess);
	while (getchar() != 'y')
		printf("Well, then, is it %d?\n", ++guess); //一旦输入非y值，并且按回车后，其实等于给getchar()两次输入，因此会打印两次++guess
	printf("I knew I could do it!\n");

	return 0;
}
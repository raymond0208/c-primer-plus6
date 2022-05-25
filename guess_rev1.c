#include <stdio.h>
int main(void)
{
	int guess = 1;

	printf("Pick an integer from 1 to 100. I will try to guess.\n");
	printf("Un... is your number %d?\n", guess);
	while (getchar() != 'y')
	{
		printf("Well, then, is it %d?\n", ++guess); //一旦输入非y值，并且按回车后，其实等于给getchar()两次输入，因此会打印两次++guess
		while(getchar() != '\n') //在输入数值后,一旦读到换行即重新开始循环，不读取换行符的输入；
			continue;
	}//包含多行代码时，要把循环体用braces包裹起来
	printf("I knew I could do it!\n");

	return 0;
}
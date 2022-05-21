#include <stdio.h>

int main(void)
{
	char ch;
	int replace = 0;

	while((ch = getchar()) != '#')
	{
		switch(ch)
		{
			case '.' : //ch = '!';
					   putchar('!');
					   replace++;
					   break;
			case '!' : //ch = '!';
					   //ch = '!';
					   printf("!!");
					   replace++;
					   break;
			default : putchar(ch);
		}
		
	}

	printf("The number of substituion is: %d\n", replace);

	return 0;
}
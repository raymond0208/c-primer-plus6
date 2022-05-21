#include <stdio.h>

int main(void)
{
	char ch;
	int replace = 0;

	while((ch = getchar()) != '#')
	{
		if (ch == '.')
		{	
			//ch = '!';
			putchar('!');
			replace++;
		}
		else if(ch == '!')
		{
			putchar('!');
			putchar('!');
			//ch = '!';
			//ch = '!';
			replace++;
		}
		else
			//ch = ch;
			putchar(ch);
	}

	printf("The number of substituion is: %d\n", replace);

	return 0;
}
#include <stdio.h>

int main(void)
{
	char ch;
	int i =0;

	printf("Please enter the strings:\n");

	while((ch = getchar()) != '#' && ch != '\n')
	{
		printf("%-2c:%4d ",ch, ch);
		i++;
		if(i % 8 == 0)
			printf("\n");
	}
	printf("\n");
	return 0;
}
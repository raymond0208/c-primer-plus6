#include <stdio.h>

/*void chline(char ch, int i, int j);

int main(void)
{
	chline("*", 4, 3);
	return 0;
}

void chline(char ch, int i, int j)
{
	int a, b;
	for (a = 0; a < i; a++)
	{
		for(b = 0; b < j; b++)
			{
				printf("%c", ch);
			}
		printf("\n");
	}
}*/

void chline(char ch, int i, int j);

int main(void)
{
	char ch;
	int i, j;
	
	printf("Please enter character, i, j:\n");
	ch = getchar();
	scanf("%d %d", &i, &j);
	chline(ch, i, j);
	
	return 0;
}

void chline(char ch, int i, int j)
{
	int k;
	
	for (k = 0; k < i; k++)
		printf(" ");
	for (k = i; k <= j; k++)
		printf("%c", ch);
}
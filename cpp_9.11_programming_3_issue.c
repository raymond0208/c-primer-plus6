#include <stdio.h>

void chprint(char ch, int col, int row);

int main(void)
{
	char ch;
	int col, row;

	printf("Please enter character: ");
	ch = getchar();
	printf("Please enter number of columns and rows: ");
	scanf("%d %d", &col, &row);
	chprint(ch, col, row);

	return 0;
}

void chprint(char ch, int col, int row)
{
	int c, r;

	for (r = 0; r < row; r++)
	{
		for(c = 0; c < col; c++)
			printf("%c", ch); //不能使用“%c\n", 因为每输出完一个字符就换行，无法达到一次输出col个字符一行的效果
		printf("\n"); //执行完循环后，输入“一个”换行符，only one！

	}
}


/*
void function(char ch, int col, int row);

int main(void)
{
	char ch;
	int col, row;
	
	printf("Please enter the character: ");
	ch = getchar();
	printf("Please enter the number of columns and the number of rows: ");
	scanf("%d %d", &col, &row);
	function(ch, col, row);
	
	return 0;
}

void function(char ch, int col, int row)
{
	int c, r;
	
	for (r = 0; r < row; r++)
	{
		for (c = 0; c < col; c++)
			printf("%c", ch);
		printf("\n");
	}
}
*/
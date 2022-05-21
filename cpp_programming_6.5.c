 #include <stdio.h>

int main(void)
{
	int row, space;
	char ch, ch1;

	printf("Please enter an upper case letter:\n");
	scanf("%c", &ch);
	ch1 = ch;

	for (row = 0; row < ch - 'A' + 1; row++)
	{
		for (space = 0; space < ch - 'A' - row; space++)
			printf(" ");

		for (ch='A'; ch < 'A' + row + 1; ch++)
			printf("%c",ch);

		for (ch = 'A' + row - 1; ch >= 'A'; ch--)
			printf("%c",ch);

		printf("\n");
		ch = ch1; //因为上面的内循环中把ch初始化为了A,所以每一次内循环结束，都要把ch复原回scanf输入的字符数值
 	}

 	return 0;
}
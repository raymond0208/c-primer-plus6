#include <stdio.h>

int main(void)
{

	char previous, present;
	int count = 0;

	printf("Please enter strings: \n");

	while((present=getchar()) != '#')
	{
		if(present == 'i' && previous == 'e')
			count++;
		previous = present; //第一次运行后，输入的第一个字符变成了第二次输入第二个字符时的previous字符, 站在每一次字符输入结束后，需要进入下一个循环时，设置当下present成为即将开始的下一次循环的previous
	}

	printf("ei字符出现的次数为%d次.\n", count);

	return 0;
}





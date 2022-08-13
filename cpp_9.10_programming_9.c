#include <stdio.h>

void show_menu(void);
int select_menu(int, int);

int main()
{
	int res;

	show_menu();

	while( (res = select_menu(1,4) )!= 4)
	{
		printf("I like choice %d.\n", res);
		show_menu();
	}

	printf("Bye.\n");


	return 0;
}


void show_menu()
{
	printf("Please choose one of the following:\n");
	printf("1) copy files       2) move files\n");
	printf("3) remove files     4) quit\n");
	printf("Please enter the number of your choice:\n");
}

int select_menu(int a, int b)
{
	int ans;
	int good;
	good = scanf("%d", &ans);
	while (good == 1 && (ans < 1 || ans > 4)) //也可以用“if"
	{
		show_menu();
		scanf("%d", &ans);
	}
	if ( good != 1)
	{
		ans = 4;
	}

	return ans;
}
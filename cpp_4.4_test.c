#include <stdio.h>
#define B1 "booboo"
#define X 10
int main(void)
{
	int age;
	char name[20];
	
	printf("Please enter your first name.");
	scanf("%s", name);
	printf("All right, %s, what's your age?\n", name);
	scanf("%d", &age);
	int xp;
	xp = age + X;
	printf("That's a %s! You must be at least %d.\n", B1, xp);

	return 0;

}
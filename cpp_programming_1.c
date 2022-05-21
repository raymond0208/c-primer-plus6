#include <stdio.h>

int main(void)
{
	char first[20];
	char last[20];
	printf("Please enter your first name and last name\n");
	scanf("%19s %19s", first, last);
	printf("%s %s.\n", first, last);

	return 0;
}

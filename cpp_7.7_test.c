#include <stdio.h>
int main(void)
{
	char ch;
	int lc = 0;
	int uc = 0;
	int oc = 0;

	while ((ch = getchar()) != '#')
	{
		if ((ch >= 'a') && (ch <= 'z'))
			lc++;
		else if (!(ch < 'A') || !(ch > 'Z'))
			uc++;
		oc++;
	}
	printf("%d lowercase, %d uppercase, %d other\n", lc, uc, oc);
	return 0;
}
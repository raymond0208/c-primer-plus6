#include <stdio.h>

int main(void)
{
	char ch;
	int space_ct, newline_ct, other_ct;

	space_ct = newline_ct = other_ct = 0;

	while ((ch = getchar()) != '#')
	{	
		switch (ch)
		{
			case ' ': space_ct++;
					  break;
			case '\n': newline_ct++;
					  break;
			default: other_ct++;
					  break;		  	
		}

	}
	printf("Nunber of space is %d, number of newline is %d and number of all other characters is %d\n", space_ct, newline_ct, other_ct);
	
	return 0;
}
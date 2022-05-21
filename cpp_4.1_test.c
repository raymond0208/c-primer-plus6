#include <stdio.h>·1
#define Q "His Hamlet was funny without being vulgar."

int main()
{
	int rv;
	printf("%c%c%c\n", 'H', 105, '\41');

	//printf("%s\nhas %hd characters.\n", Q, strlen(Q));
	rv = printf(Q"\n");
	//printf("\n");
	printf("%shas %d characters.\n", Q, rv);
	printf("Is %2.2e the same as %2.2f?\n", 1201.0, 12010);

	return 0;

}

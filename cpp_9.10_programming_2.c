Q2
void dount (int i)

int gear(int i, int j)

int guess(void)

void stuff_it(double i, double *j)

Q3
int n_to_char(int i)

int digit(double i, int j)

double which(double *i, double *j)

int random(void)


Q4
int sum(int a, int b)
{
	/*int sum;
	sum = a + b;*/

	return a+b;
}

Q5
double sum(double a, double b)
{
	/*int sum;
	sum = a + b;*/

	return a+b;
}

Q6

Original
int alter(int a, int b)
{
	return a + b;
}

int alter(int a, int b)
{
	return a - b;
}

Correct
void alter(int * a, int * b)
{
	int temp;
	temp = *a + *b
	*b = *a - *b
	*a = temp
}
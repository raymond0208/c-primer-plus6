#include <stdio.h>

#define basic 10
#define hour1 40
#define overtime  1.5
#define tax1  0.15
#define tax2  0.2
#define tax3  0.25
#define taxbar1  300
#define taxbar2  150


int main(void)
{
	double hour;
	double grosspay,netpay,tax_amt;
	grosspay = netpay = tax_amt = 0;

	printf("Please enter your working hours in a week:\n");
	scanf("%lf", &hour);

	if(hour <= 40)
		grosspay = hour * basic;
	else
		grosspay = hour1 * basic + (hour - hour1) * overtime * basic;
		

	if (grosspay <= taxbar1)
			tax_amt = grosspay * tax1;
	else if (grosspay <= taxbar1 + taxbar2)
			tax_amt = taxbar1 * tax1 + (taxbar1 + taxbar2 - grosspay) * tax2;

	else if (grosspay > taxbar1 + taxbar2)
			tax_amt = taxbar1 * tax1 + taxbar2 * tax2 + (grosspay - taxbar1 - taxbar2) * tax3;


	netpay = grosspay - tax_amt;

	printf("The gross pay is %.2f, the taxes is %.2f and the net pay is %.2f. \n", grosspay, tax_amt, netpay);

	return 0;
}
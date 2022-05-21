#include <stdio.h>

int main(void)
{

	float height;
	float cm = 2.54;
	double g;

	printf("请输入您的身高：    英寸\b");
	scanf("%f", &height);

	printf("1英寸相当于%f厘米\n", cm);
	g = cm * height;
	printf("您的身高为： %g厘米\n", g);

	return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int a;
	int b;
	int c;

	printf("enter base and exponent:");
	scanf_s("%d %d", &a, &b);

	c = pow(a, b);

	printf("%d\n", c);

	system("pause");
	return 0;

}
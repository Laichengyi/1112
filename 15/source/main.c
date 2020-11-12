#include <stdio.h>
#include <stdlib.h>

int maximum(int x, int y, int z);

int main(void)
{
	int n1;
	int n2;
	int n3;
	printf("enter three interger:");
	scanf_s("%d %d %d", &n1, &n2, &n3);
	printf("maximum is :%d\n", maximum(n1, n2, n3));
	system("pause");
	return 0;
}

int maximum(int x, int y, int z)
{
	int max = x;

	if (y > max)
	{
		max = y;
	}
	if (z > max)
	{
		max = z;
	}
	return max;
}
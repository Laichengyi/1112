#include <stdio.h>
#include  <stdlib.h>
#define SIZE 5

void modifyArray(int b[], int size);
void modifyElement(int e);

int main(void)
{
	int a[SIZE] = { 0,1,2,3,4 };
	int i;

	printf("effects of passing entire array by reference:\n\nthe""values of the original array are:\n");

	for (i = 0; i < SIZE; i++)
	{
		printf("%3d", a[i]);
	}
	printf("\n");

	modifyArray(a, SIZE);
	printf("the value of the mpdified are :\n");
	for (i = 0; i < SIZE; i++)
	{
		printf("%3d", a[i]);
	}
	printf("\n\n\neffects of passing array element""by value:\n\nthe value of a[3] is %d\n", a[3]);

	modifyElement(a[3]);
	printf("the value of a[3] is %d\n", a[3]);

	system("pause");
	return 0;
}

void modifyArray(int b[], int size)
{
	int j;
	for (j = 0; j < size; j++)
	{
		b[j] *= 2;
	}
}

void modifyElement(int e)
{
	printf("value in modifyElement is %d\n", e *= 2);
}
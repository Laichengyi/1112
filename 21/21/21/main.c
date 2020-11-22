#include <stdio.h>
#include <stdlib.h>

void staticArrayInit(void);
void automaticArrayInit(void);

int main(void)
{
	printf("first call to each function:\n");
	staticArrayInit();
	automaticArrayInit();

	printf("\n\nsecond call to each function:\n");
	staticArrayInit();
	automaticArrayInit();
	printf("\n");
	system("pause");
	return 0;
}

void staticArrayInit(void)
{
	static int array1[3];
	int i;

	printf("\nvalues on entering staticArrayInit:\n");

	for (i = 0; i <= 2; i++)
		printf("array1[%d] = %d  ", i, array1[i]);

	printf("\nvalues on exiting staticArrayInit:\n");

	for (i = 0; i <= 2; i++)
		printf("array1[%d] = %d ", i, array1[i] += 5);
}

void automaticArrayInit(void)
{
	int array2[3] = { 1,2,3 };
	int i;


	printf("\n\nvalues on entering antomicArrayInit:\n");

	for (i = 0; i <= 2; i++)
		printf("array2[%d] = %d  ", i, array2[i]);
		printf("\nvalue on exiting automicArrayInit:\n");
	for (i = 0; i <= 2; i++)
		printf("array2[%d] = %d  ", i, array2[i] += 5);
}
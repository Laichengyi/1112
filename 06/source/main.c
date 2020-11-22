#include <stdio.h>
#include <stdlib.h>
#define size 10

int main(void)
{
	int s[size];
	int j;

	for (j = 0; j < size; j  ++)
	{
		s[j] = 2 + 2 * j;
	}
	printf("%s%13s\n", "element", "value");

	for (j = 0; j < size; j++)
	{
		printf("%7d%13d\n", j, s[j]);
	}
	system("pause");
	return 0;
}
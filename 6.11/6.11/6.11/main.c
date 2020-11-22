#include <stdio.h>
#include<stdlib.h>

int main(void)
{
	int g[10] = { 0 };
	int a;
	for (int i = 0; i < 10; i++)
	{
		scanf_s("%d", &g[i]);
	}
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			if (g[j] > g[j + 1])
			{
				a = g[j+1];
				g[j+1] = g[j];
				g[j] = a;
			}
		}
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", g[i]);
	}
	printf("\n");
	system("pause");
}
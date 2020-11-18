#include <stdio.h>
#include <stdlib.h>

int main()
{
	char a;
	char b;
	printf("input:");
	scanf_s("%c", &a);
	b = a + ('a' - 'A');
	printf("output:%c\n", b);
	system("pause");
	return 0;
}
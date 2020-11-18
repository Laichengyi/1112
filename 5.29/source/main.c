#include <stdio.h>
int main()
{
	int a, b;
	int ans = 1; 
	int i = 2; 

	printf("enter two interger:");
	scanf_s("%d %d", &a, &b);

	
	if (a == 1 || b == 1) printf("%d", a*b);
	else if (a >= i && b >= i)
	{
		
		while (a >= i && b >= i)
		{
			
			while (a%i == 0 && b%i == 0)
			{
				ans = ans * i;
				a /= i;
				b /= i;
			}
			i++;
		}
		printf("%d\n", ans*a*b);
	}
	else printf("Error\n");
	system("pause");
	return 0;
}
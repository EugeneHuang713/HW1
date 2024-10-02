#include<stdio.h>
#include<stdlib.h>

int main()
{
	int k,n;
	for (k = 2; k <= 10; k+=2)
	{
		for (n = 1; n <= (10 - k)/2; n++)
			printf(" ");
		for (n = 1; n <= k - 1; n++)
			printf("*");
		printf("\n");
	}
	system("pause");
	return 0;
}
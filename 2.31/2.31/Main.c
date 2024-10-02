#include<stdio.h>
#include<stdlib.h>

int main()
{
	int k;
	printf("number     square       cube\n");
	for (k = 0; k <= 10; k++)
	{
		printf("%6d     %6d     %6d\n",k,k*k,k*k*k);
	}
	system("pause");
	return 0;
}
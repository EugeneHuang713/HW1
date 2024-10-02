#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num;
	printf("Please enter an integer¡G");
	scanf("%d", &num);
	num %= 2;
	if (num == 1)
		printf("The integer is odd\n");
	else
		printf("The integer is even\n");
	system("pause");
	return 0;
}
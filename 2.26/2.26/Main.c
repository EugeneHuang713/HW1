#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num1, num2;
	printf("Please enter two integers(Separate with spaces)¡G");
	scanf("%d %d", &num1, &num2);
	if((num2%num1)==0)
		printf("%d is a factor of %d\n", num1, num2);
	else
		printf("%d is not a factor of %d\n", num1, num2);

	system("pause");
	return 0;
}
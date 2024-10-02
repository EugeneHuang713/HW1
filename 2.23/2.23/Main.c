#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num1, num2, num3;
	printf("Please enter three integers(Separate with spaces)¡G");
	scanf("%d %d %d",&num1,&num2,&num3);
	if (num1 > num2)
	{
		if (num1 > num3)
		{
			printf("The largest number is ¡G %d\n", num1);
		}
	}
	else if (num2 > num3)
		printf("The largest number is ¡G %d\n", num2);
	else
		printf("The largest number is ¡G %d\n", num3);

	if (num1 < num2)
	{
		if (num1 < num3)
		{
			printf("The smallest number is ¡G %d\n", num1);
		}
	}
	else if (num2 < num3)
		printf("The smallest number is ¡G %d\n", num2);
	else
		printf("The smallest number is ¡G %d\n", num3);
	system("pause");
	return 0;
}

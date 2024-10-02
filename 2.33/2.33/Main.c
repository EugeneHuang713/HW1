#include<stdio.h>
#include<stdlib.h>

int main()
{
	int miles, gallon, average, fees, tolls;
	printf("Answer the following questions\n");
	printf("Total miles driven per day¡G");
	scanf("%d", &miles);
	printf("Cost per gallon of gasoline¡G");
	scanf("%d", &gallon);
	printf("Average miles per gallon¡G");
	scanf("%d", &average);
	printf("Parking fees per day¡G");
	scanf("%d", &fees);
	printf("Tolls per day¡G");
	scanf("%d", &tolls);
	printf("The cost of a day¡G%d\n", gallon/ average* miles+fees+tolls);
	system("pause");
	return 0;
}
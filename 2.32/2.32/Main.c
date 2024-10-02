#include<stdio.h>
#include<stdlib.h>

int main()
{
	float weight,height;
	printf("Please enter your weight(kg) and height(m) (Separate with spaces)¡G");
	scanf("%f %f",&weight,&height);
	if ((weight / height / height) < 18.5)
		printf("Your BMI ¡G%f that is underweight", weight / height / height);
	if ((weight / height / height) >= 18.5 && (weight / height / height)<=24.9)
		printf("Your BMI ¡G%f that is normal", weight / height / height);
	if ((weight / height / height) >= 25 && (weight / height / height) <= 29.9)
		printf("Your BMI ¡G%f that is overweight", weight / height / height);
	if ((weight / height / height) > 30)
		printf("Your BMI ¡G%f that is obese", weight / height / height);
	printf("\n");
	
	system("pause");
	return 0;
}
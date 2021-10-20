#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float w;
	float h;
	float bmi=0;
	
	
	printf("enter your weight(kg) and height(m)\n");

	scanf_s("%f %f", &w, &h);
	bmi = (w / (h * h));
	printf("your BMI is %f",bmi);

	return 0;
}
#include <stdio.h>
#include <math.h>

int main()
{
	float a;
	printf("Enter your given number : ");
	scanf("%f", &a);

	if (a > 0)
	{
		if (a - floor(a) == 0)
		{
			printf("The number is a positive integer number\n");
		}
		else if (a - floor(a) != 0)
		{
			printf("The number is a positive decimal number\n");
		}
	}
	else if (a < 0)
	{
		if (a - floor(a) == 0)
		{
			printf("The number is a negative integer number\n");
		}
		else if (a - floor(a) != 0)
		{
			printf("The number is a negative decimal number\n");
		}
	}

	else
	{
		printf("The number given is zero 0\n");
	}
	return 0;
}
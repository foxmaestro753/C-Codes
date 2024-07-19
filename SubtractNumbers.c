#include <stdio.h>
int main()
{
	int minuend, subtrahend, difference;
	printf("Please enter the first number:\n");
	scanf("%d", &minuend);
	printf("Please enter the second number:\n");
	scanf("%d", &subtrahend);
	difference = minuend - subtrahend;
	printf("the difference of the two integer is : %d\n", difference);
	return 0;
}
#include <stdio.h>
int main()
{
	int addend1, addend2, sum;
	printf("Please enter the first number:\n");
	scanf("%d", &addend1);
	printf("Please enter the second number:\n");
	scanf("%d", &addend2);
	sum = addend1 + addend2;
	printf("The sum of the two integer is : %d\n", sum);
	return 0;
}
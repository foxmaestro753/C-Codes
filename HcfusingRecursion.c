#include <stdio.h>

int HCF(int x, int y)
{
    if (y == 0)
    {
        return x;
    }
    else
    {
        return HCF(y, (x % y));
    }
}

int main()
{
    int num1, num2, HCFanswer;
    printf("\nEnter two numbers to find HCF using Euclidean algorithm: ");
    scanf("%d%d", &num1, &num2);
    HCFanswer = HCF(num1, num2);

    printf("The HCF of %d and %d is %d\n", num1, num2, HCFanswer);
    return 0;
}
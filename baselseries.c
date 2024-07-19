#include <stdio.h>
int main()
{
    long int n;
    double sum = 0.0;

    printf("The number of terms upto which you want to calculate : ");
    scanf("%ld", &n);

    for (long int k = 1; k <= n; k++)
    {
        sum = sum + (double)1 / (k * k);
        printf("The %ld term is : %0.18f\n", k, sum);
    }
    return 0;
}
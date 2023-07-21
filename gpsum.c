#include <stdio.h>
#include <math.h>
int main()
{
    long int n;
    double sum = 0.0;
    printf("Upto how many terms the sum do you want : ");
    scanf("%ld",&n);

    for (long int i=0 ; i<=n ; i++){
        sum = sum + 1/(double)pow(2,i);
        printf("The sum upto %ld is : %0.15f\n",i, sum);
    }
    return 0;
}
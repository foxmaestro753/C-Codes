#include <stdio.h>
int main()
{
    long int n, i;
    double term = 0.0;
    printf("enter until which term u want the program to run : ");
    scanf("%ld", &n);


    for (long int i= 1 ; i<=n; i++){
        printf("the %ld term is : %0.15f\n", i, term);
        term = term + 1/(double)i;
    }
    return 0;
}
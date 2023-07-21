#include <stdio.h>
int main()
{
    int sum, a, max, num, min;
    printf("Enter the number of inputs you want : ");
    scanf("%d",&num);
    printf("enter input %d : ",1);
    scanf("%d", &a);
    max = a;
    min = a;
    sum = a;

    for(int i=2; i<=num; i++){
        printf("enter input %d : ",a);
        scanf("%d", &a);
        sum = sum + a;

        if (a>=max){
            max = a;
        }
        if (a<=min){
            min = a;
        }
    }

    printf("The average of the given inputs is %f\n",(float)sum/num);
    printf("the largest number is %d\n", max);
    printf("the smallest number is %d\n", min);
    return 0;
}

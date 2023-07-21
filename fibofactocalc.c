#include <stdio.h>

int fibo(int n);
int facto(int r);

int main()
{
    int input,num;
    printf("enter 1 for fibonacci and 2 for factorial : ");
    scanf("%d",&input);

    if (input == 1){
        printf("enter the fibonacci term u want : ");
        scanf("%d",&num);
        printf("The %dth term is : %d", num, fibo(num));
    }

    if (input == 2){
        printf("enter the fcatorial u want : ");
        scanf("%d",&num);
        printf("The factorial of %d is : %d", num, facto(num));
    }

    if (input != 1 && input != 2){
        printf("Invalid input :(");
    }
    
return 0;
}

int fibo (int n){
    int m=0;
    for (int x = 0, y = 1, i=0 ; i<=n-1 ; i++){
        m = x+y;
        x = m-x;
        y = m;
    }
    return(m);
}

int facto (int n){
    int factorial=1;

    if (n==0){
        factorial = 1;
    }

    else{
        for (int i = 1 ; i<=n ; i++){
            factorial = factorial*i;
        }
    }

    return(factorial);
}


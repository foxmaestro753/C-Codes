#include <stdio.h>
#include <math.h>

int main()
{
    int num, answer=0, j=1;
    printf("Enter the base 2 number : ");
    scanf("%d",&num);

    while(num - pow(10,j) >= 0){
        j++;
    }

    for(int numero=0, i = j-1 ; i>=0 ; i--){
        while(num - numero*pow(10,i) >= 0){
            numero++;
        }
        answer = answer + (numero-1)*pow(2,i);
        num = num - (numero-1)*pow(10,i);
        numero = 0;
    }

    printf("The number in base 10 is %d",answer);

return 0;
}
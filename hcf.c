#include <stdio.h>
int main(){
    int num1, num2, hcf;
    printf("Enter the two numbers : ");
    scanf("%d",&num1);
    scanf("%d",&num2);

    if(num1<0){
        num1 = num1*(-1);
    }

    if(num2<0){
        num2 = num2*(-1);
    }

    if (num1==0 && num2==0){
        printf("The HCF of the two given number is undefined\n");
    }

    else if(num1==0 && num2!=0){
        printf("The HCF of the two given number is %d\n",num2);
    }

    else if(num1!=0 && num2==0){
        printf("The HCF of the two given number is %d\n",num1);
    }

    else{
        for (int i = 1; i<=num1 ; i++){
            if(num1%i == 0 && num2%i == 0){
                hcf = i;
            }
    }

    printf("The HCF of the two given number is : %d\n",hcf);
    return 0;
    }
}
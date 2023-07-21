#include <stdio.h>
int main()
{   
    int num;
    printf("Enter the number which u want to enter : ");
    scanf("%d",&num);
    
    if (num == 1){
        printf("%num is neither prime nor composite");
    }
    else if (num == 2 || num == 3){
        printf("%d is a prime number\n",num);
    }

    else {
        for (int i = 2 ; num/2 >= i ; i++){
        
        if (num%i == 0) {
            printf("%d is a composite number\n",num);
            break;
        }
        if (num/2 == i){
            printf("%d is a prime number\n",num);
        }
    }
}
return 0;
}
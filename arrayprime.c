#include <stdio.h>

int prime (int num){
    int prime;
    
    if(num<0){
        prime=0;
    }

    else if (num == 1 || num==0){
        prime=0;
    }
    else if (num == 3 || num == 2){
        prime=1;
    }

    else {
        for (int i = 2 ; num/2 >= i ; i++){
        
        if (num%i == 0) {
            prime=0;
            break;
        }
        if (num/2 == i){
            prime=1;
        }
    }
}

return(prime);
}


int main(){
    int size;

    printf("Enter the number of elements in your array : ");
    scanf("%d",&size);

    int array[size];

    for (int i = 0 ; i<size ; i++){
        printf("enter the %d element : ",i+1);
        scanf("%d",&array[i]);
    }

    for (int i = 0 ; i<size ; i++){
        if(prime(array[i]) == 1){
            printf("%d ",array[i]);
        }
    }

    printf("\n");
    return 0;
}
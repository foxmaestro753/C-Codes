#include<stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define MAX_SIZE 20

int main()
{
    int i,j,size,matrix[MAX_SIZE][MAX_SIZE];
   
    while(scanf("%d",&size)!=-1){

        int count =0;
        int sum = 0;

        for(int i = 0 ; i<size ; i++){
            sum = sum+i;
        }

        if(size<=0){
        printf("Not upper triangular\n");
        }

        else{
            for (i=0;i<size;i++) {
                for (j=0;j<size;j++) {
                    scanf("%d",&matrix[i][j]);
                }

            }

            for(int i = 1 ; i<size ; i++){
                for(int j = 0 ; j<i ; j++){
                    if(matrix[i][j]==0){
                        count++;
                    }
                }
            }
            if(count==sum){
                printf("upper triangular\n");
            }
            else{
                printf("Not upper triangular\n");
            }
        }
    }
}


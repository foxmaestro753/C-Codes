#include <stdio.h>
int main(){
    int z;
    printf("The term u want to print : ");
    scanf("%d",&z);

    for ( int j=1, m, x=1, y = 0; j<=z; j++ ){
        m = x+y;
        printf("%d ",m);
        x = m-x;
        y = m;
    }
    return 0;
}

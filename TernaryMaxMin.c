#include <stdio.h>

int main()
{
    int a, b, c;
    float f;
    printf("The numbers to be entered are : \n");
    scanf("%d%d%d", &a, &b, &c);

    while(a<0 || b<0 || c<0){
    printf("The numbers to be entered are : \n");
    scanf("%d%d%d", &a, &b, &c);
    }

    f = (float)(a+b+c)/3;

    (a<=0 || b<=0 || c<=0) ? printf("The numbers entered are wrong enter positive numbers\n"): (a>b && a>c) ? printf("The largest number is %d\n",a):(b>a && b>c) ? printf("The largest number is %d\n", b): (c>a && c>b) ? printf("The largest number is %d\n", c): 1 ;
    
    (a<b && a<c) ? printf("The smallest number is %d \nthe average is %f\n", a, f): (b<c && b<a) ? printf("The smallest number is %d \nthe average is %f\n", b,f): (c<a && c<b) ? printf("The smallest number is %d \nthe average is %f\n", c, f): 1 ;
    return 0;
}
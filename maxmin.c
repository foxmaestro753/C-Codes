#include <stdio.h>
int main()
{
    int a, b, c, d, e, f;
    printf("the numbers to be entered are : \n");
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);

    if (a<=0 || b<=0 || c<=0 || d<=0 || e<=0){
        printf("the numbers entered wrong enter positive numbers\n");
    }

    else {

        if (a>b && a>c && a>d && a>e){
            printf("the largest number is %d\n",a);
        }

        else if (b>a && b>c && b>d && b>e) {
            printf("the largest number is %d\n",b);
        }

        else if (c>a && c>b && c>d && c>e){
            printf("the largest number is %d\n",c);
        }

        else if (d>a && d>b && d>c && d>e){
            printf("the largest number is %d\n",d);
        }

        else if (e>a && e>b && e>c && e>d){
            printf("the largest number is %d\n",e);
        }

        
        if (a<b && a<c && a<d && a<e){
            printf("the smallest number is %d\n",a);
        }

        else if (b<a && b<c && b<d && b<e){
            printf("the smallest number is %d\n",b);
        }

        else if (c<a && c<b & c<d && c<e){
            printf("the smallest number is %d\n",c);
        }

        else if (d<a && d<b && d<c && d<e){
            printf("the smallest number is %d\n",d);
        }

        else if (e<a && e<b && e<c && e<d){
            printf("the smallest number is %d\n",e);
        }
    }

    f = (a+b+c+d+e)/5;
    printf("the average of the five values is : %d\n", f);
    return 0;
}
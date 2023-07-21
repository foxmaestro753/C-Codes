#include <stdio.h>
int main()
{
    int mark;
    printf("enter the marks which u got : \n");
    scanf("%d", &mark);

    if (mark>100 || mark<0){
        printf("you have entered impossible marks\n");
    }

    else {

        if (mark>95){
            printf("the student has obtained A+ Grade\n");
        }

        else if (mark>90 && mark<=95){
            printf("the student has obtained A Grade\n");
        }

        else if (mark>80 && mark<=90){
            printf("the student has obtained A- Grade\n");
        }

        else if (mark>70 && mark<=80){
            printf("the student has obtained B Grade\n");
        }

        else if (mark>60 && mark<=70){
            printf("the student has obtained B- Grade\n");
        }

        else if (mark>50 && mark<=60){
            printf("the student has obtained C Grade\n");
        }

        else if (mark>40 && mark<=50){
            printf("the student has obtained C- Grade\n");
        }

        else if (mark>30 && mark<=40){
            printf("tthe student has obtianed D Grade\n");
        }

        else {
            printf("the student has obtained F Grade, he or she needs to retake the course \n");
        }
    
    }
    return 0;
}

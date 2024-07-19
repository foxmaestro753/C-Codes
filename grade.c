#include <stdio.h>

int main()
{
    int mark;
    printf("Enter the marks which you got : \n");
    scanf("%d", &mark);

    if (mark > 100 || mark < 0)
    {
        printf("You have entered impossible marks\n");
    }

    else
    {

        if (mark > 95)
        {
            printf("The student has obtained A+ Grade\n");
        }

        else if (mark > 90 && mark <= 95)
        {
            printf("The student has obtained A Grade\n");
        }

        else if (mark > 80 && mark <= 90)
        {
            printf("The student has obtained A- Grade\n");
        }

        else if (mark > 70 && mark <= 80)
        {
            printf("The student has obtained B Grade\n");
        }

        else if (mark > 60 && mark <= 70)
        {
            printf("The student has obtained B- Grade\n");
        }

        else if (mark > 50 && mark <= 60)
        {
            printf("The student has obtained C Grade\n");
        }

        else if (mark > 40 && mark <= 50)
        {
            printf("The student has obtained C- Grade\n");
        }

        else if (mark > 30 && mark <= 40)
        {
            printf("tthe student has obtianed D Grade\n");
        }

        else
        {
            printf("The student has obtained F Grade, he or she needs to retake the course \n");
        }
    }
    return 0;
}
#include <stdio.h>

int main()
{
    int z, s1, s2, s3, f1, f2, f3, a, b, c;

    printf("The subject-wise full marks respectively are : \n");
    scanf("%d%d%d", &f1, &f2, &f3);
    printf("Enter your marks for the first subject : ");
    scanf("%d", &a);
    printf("Enter your marks for the second subject : ");
    scanf("%d", &b);
    printf("Enter your marks for the third subject : ");
    scanf("%d", &c);

    s1 = a * 100 / f1;
    s2 = b * 100 / f2;
    s3 = c * 100 / f3;
    z = (a + b + c) * 100 / (f1 + f2 + f3);

    while (a > f1 || b > f2 || c > f3 || f1 <= 0 || f2 <= 0 || f3 <= 0)
    {
        printf("You have entered impossible numbers\n");
        printf("Enter the correct marks in each subject again\n");

        printf("The subject-wise full marks respectively are : \n");
        scanf("%d%d%d", &f1, &f2, &f3);
        printf("Enter your marks for the first subject : ");
        scanf("%d", &a);
        printf("Enter your marks for the second subject : ");
        scanf("%d", &b);
        printf("Enter your marks for the third subject : ");
        scanf("%d", &c);
    }

    if (s1 >= 33 && s2 >= 33 && s3 >= 33 && z >= 40)
    {
        printf("You have passed the exam\n");
        printf("You have scored %d on cumulative\n", z);
    }

    else if (s1 < 33 && s2 >= 33 && s3 >= 33 && z >= 40)
    {
        printf("You have failed in your first subject exam, better luck next time lol\n");
    }

    else if (s1 >= 33 && s2 < 33 && s3 >= 33 && z >= 40)
    {
        printf("You have failed in your second subject exam, better luck next time lol\n");
    }

    else if (s1 >= 33 && s2 >= 33 && s3 < 33 && z >= 40)
    {
        printf("You have failed in your third subject exam, better luck next time lol\n");
    }

    else if (s1 >= 33 && s2 >= 33 && s3 >= 33 && z < 40)
    {
        printf("You have failed in overall performance, hard luck\n");
    }

    return 0;
}
#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    if (num == 1)
    {
        printf("%num is neither Prime nor Composite");
    }
    else if (num == 2 || num == 3)
    {
        printf("%d is a Prime number\n", num);
    }

    else
    {
        for (int i = 2; num / 2 >= i; i++)
        {

            if (num % i == 0)
            {
                printf("%d is a Composite number\n", num);
                break;
            }
            if (num / 2 == i)
            {
                printf("%d is a Prime number\n", num);
            }
        }
    }
    return 0;
}
#include <stdio.h>

int main()
{
    int row, i, j;
    printf("Enter the number which u want to enter : ");
    scanf("%d", &row);

    for (int term, i = 0; row > i; i++)
    {

        for (int space = 0; space <= row - i; space++)
        {
            printf(" ");
        }

        term = 1;

        for (int j = 0; i >= j; j++)
        {
            if (j == 0 || i == j)
            {
                printf("%d ", 1);
            }
            else
            {
                term = term * ((float)(i - j + 1) / j);
                printf("%d ", term);
            }
        }
        printf("\n");
    }
    return 0;
}
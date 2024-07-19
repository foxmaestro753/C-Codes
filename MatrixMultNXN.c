#include <stdio.h>

int main()
{
    int n, m, q, a, b;
    printf("Enter the row and coloumn of first matrix : ");
    scanf("%d%d", &n, &m);
    a = m;
    printf("Enter the row and coloumn of second matrix : ");
    scanf("%d%d", &m, &q);
    b = m;

    while (a != b)
    {
        printf("Enter correct values for rows and coloumn : \n");
        printf("Enter the row and coloumn of first matrix : ");
        scanf("%d%d", &n, &m);
        a = m;
        printf("Enter the row and coloumn of second matrix : ");
        scanf("%d%d", &m, &q);
        b = m;
    }
    int array1[n][m];
    int array2[m][q];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("Enter the [%d][%d] element of array1 : ", i, j);
            scanf("%d", &array1[i][j]);
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < q; j++)
        {
            printf("Enter the [%d][%d] element of array2 : ", i, j);
            scanf("%d", &array2[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < q; j++)
        {
            int term = 0;
            for (int k = 0; k < m; k++)
            {
                term = term + (array1[i][k] * array2[k][j]);
            }
            printf("%d ", term);
        }
        printf("\n");
    }
}
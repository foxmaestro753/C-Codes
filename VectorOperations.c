#include <stdio.h>

int scalar(int r, int c, int n, int v1[][n], int v2[][3])
{
    int product = 0;
    for (int k = 0; k < n; k++)
    {
        product = product + v1[r][k] * v2[k][c];
    }
    return (product);
}

void vector(int v1[][3], int v2[][3])
{
    int ans;
    ans = ((v1[0][1] * v2[2][0]) - (v1[0][2] * v2[1][0]));
    printf("%d(i) ", ans);

    ans = ((v1[0][2] * v2[0][0]) - (v1[0][0] * v2[2][0]));
    printf("%d(j) ", ans);

    ans = ((v1[0][0] * v2[1][0]) - (v1[0][1] * v2[0][0]));
    printf("%d(k)\n", ans);
}

int main()
{
    int v1[3][3];
    int v2[3][3];
    for (int j = 0; j < 3; j++)
    {
        printf("Enter the 1st vector direction cosines : ");
        scanf("%d", &v1[0][j]);
    }

    for (int j = 0; j < 3; j++)
    {
        printf("Enter the 2nd vector direction cosines : ");
        scanf("%d", &v2[j][0]);
    }

    printf("The scalar product is : %d\n", scalar(0, 0, 3, v1, v2));
    printf("The vector product is : ");
    vector(v1, v2);
    return 0;
}
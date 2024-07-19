#include <stdio.h>

int main()
{
    int n, r, k = 0, j = 0, t = 0;
    printf("Input the length of array : ");
    scanf("%d", &n);

    int A[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter the [%d] element : ", i);
        scanf("%d", &A[i]);
    }

    printf("The [index] you want to arrange : ");
    scanf("%d", &r);

    int s = A[r];

    for (int i = 0; i < n; i++)
    {
        if (A[i] < s)
        {
            k++;
        }
    }

    if (r != k)
    {
        int b = A[k];
        A[k] = s;
        A[r] = b;
        t = 1;
    }

    if (k <= n - k - 1)
    {
        for (int p = 0, i = 0; i < n; i++)
        {
            int y = A[i];
            if (y < s && p < k)
            {
                int h;
                h = A[p];
                A[p] = y;
                A[i] = h;
                p++;
                j++;
            }
        }
    }

    else if (k > n - k - 1)
    {
        for (int p = k + 1, i = 0; i < n; i++)
        {
            int y = A[i];
            if (y > s && p < n)
            {
                int h;
                h = A[p];
                A[p] = y;
                A[i] = h;
                p++;
                j++;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(A + i));
    }
}
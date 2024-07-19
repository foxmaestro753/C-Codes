#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAXSIZE 20

int checker(int num)
{
    int prime = 0;

    if (num == 1)
    {
        prime = 0;
    }
    else if (num == 3 || num == 2)
    {
        prime = 1;
    }

    else
    {
        for (int i = 2; num > i; i++)
        {

            if (num % i == 0)
            {
                prime = 0;
                break;
            }
            if ((num - 1) == i)
            {
                prime = 1;
            }
        }
    }

    return (prime);
}

int main()
{
    int size;
    int arr[MAXSIZE];

    while (scanf("%d", &size) != -1)
    {
        for (int element = 0; element < size; element++)
        {
            scanf("%d", &arr[element]);
        }

        if (size == 0)
        {
            printf("No numbers");
        }

        int count = 0;
        for (int j = 0; j < size; j++)
        {
            if (checker(arr[j]) == 1)
            {
                count++;
            }
        }

        for (int i = 0, j = 0; j < size; j++)
        {
            if (i < count && checker(arr[j]) == 1)
            {
                int a;
                a = arr[i];
                arr[i] = arr[j];
                arr[j] = a;
                i++;
            }
        }

        for (int i = 0; i < count; i++)
        {
            for (int j = 0; j < count - 1; j++)
            {
                if (arr[j] > arr[j + 1])
                {
                    int b;
                    b = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = b;
                }
            }
        }

        for (int i = count; i < size; i++)
        {
            for (int j = count; j < size - 1; j++)
            {
                if (arr[j] < arr[j + 1])
                {
                    int b;
                    b = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = b;
                }
            }
        }

        for (int i = 0; i < size; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
}
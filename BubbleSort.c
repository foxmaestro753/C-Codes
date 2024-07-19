#include <stdio.h>

int main()
{
    int size;

    printf("Enter the number of elements in your array : ");
    scanf("%d", &size);

    int array[size];

    for (int i = 0; i < size; i++)
    {
        printf("Enter the %d element : ", i + 1);
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < size - 1; i++)
    {

        for (int i = 0; i < size - 1; i++)
        {
            int a;
            if (array[i] > array[i + 1])
            {
                a = array[i];
                array[i] = array[i + 1];
                array[i + 1] = a;
            }
        }
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }

    printf("\n");

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int num, guess, count = 0;
    srand(time(0));
    num = rand() % 50 + 1;
    printf("Your guess is : \n");
    scanf("%d", &guess);

    while (num != guess)
    {

        if (num > guess)
        {
            printf("The number guessed by you is smaller than the answer, go little high\n");
            count++;
            printf("Your guess is : ");
            scanf("%d", &guess);
        }

        else if (num < guess)
        {
            printf("The number guessed by you is larger than the answer, go little low\n");
            count++;
            printf("Your guess is : ");
            scanf("%d", &guess);
        }
    }

    printf("The number guessed by you is absolutely correct\n");
    count++;
    printf("The number of trials taken by you is %d\n", count);
    return 0;
}
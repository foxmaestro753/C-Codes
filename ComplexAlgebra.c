#include <stdio.h>
#include <string.h>
#include <math.h>

struct number
{
    float real;
    float imaginary;
} c1, c2;

void addition(struct number c1, struct number c2)
{
    printf("%0.2f + %0.2fi\n", c1.real + c2.real, c1.imaginary + c2.imaginary);
}

void subtraction(struct number c1, struct number c2)
{
    printf("%0.2f + %0.2fi\n", c1.real - c2.real, c1.imaginary - c2.imaginary);
}

void product(struct number c1, struct number c2)
{
    printf("%0.2f + %0.2fi\n", (c1.real * c2.real) - (c1.imaginary * c2.imaginary), (c2.real * c1.imaginary + c1.real * c2.imaginary));
}
void division(struct number c1, struct number c2)
{
    printf("%0.2f + %0.2fi\n", (((c1.real * c2.real) + (c1.imaginary * c2.imaginary)) / ((c2.imaginary * c2.imaginary) + (c2.real * c2.real))), (((c2.real * c1.imaginary) - (c1.real * c2.imaginary)) / ((c2.imaginary * c2.imaginary) + (c2.real * c2.real))));
}

void mag(struct number c1)
{
    printf("%0.2f\n", sqrt((c1.real * c2.real) + (c1.imaginary * c2.imaginary)));
}

float mag2(struct number c1)
{
    return (sqrt((c1.real * c1.real) + (c1.imaginary * c1.imaginary)));
}

void polar(struct number c1)
{
    double a1 = asin((double)c1.imaginary / mag2(c1));
    double a2 = acos((double)c1.real / mag2(c1));
    printf("%0.2fcos(%0.4lf) + %0.2fsin(%0.4lf)i\n", mag2(c1), a1, mag2(c1), a2);
}

int main()
{
    int q, w;
    while (1)
    {
        printf("The real part and imaginary part of number1 : ");
        scanf("%f%f", &c1.real, &c1.imaginary);

        printf("The real part and imaginary part of number2 : ");
        scanf("%f%f", &c2.real, &c2.imaginary);

        printf("Enter 1 for Addition\n2 for Subtraction\n3 for Multiplication\n4 for Division\n5 for Magnitude\n6 for Polar form\n");
        scanf("%d", &q);

        if (q == 1)
        {
            addition(c1, c2);
        }

        if (q == 2)
        {
            subtraction(c1, c2);
        }

        if (q == 3)
        {
            product(c1, c2);
        }

        if (q == 4)
        {
            division(c1, c2);
        }

        if (q == 5)
        {
            printf("1 for c1 & 2 for c2 ");
            scanf("%d", &w);
            if (w == 1)
            {
                mag(c1);
            }
            if (w == 2)
            {
                mag(c2);
            }
        }

        if (q == 6)
        {
            printf("1 for c1 & 2 for c2 ");
            scanf("%d", &w);
            if (w == 1)
            {
                polar(c1);
            }
            if (w == 2)
            {
                polar(c2);
            }
        }
    }
}
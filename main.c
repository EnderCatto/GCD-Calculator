#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int a, b, GCD = 0;
    // Prompt user to input two integers to find their GCD
    scanf("%d %d", &a, &b);

    if (a < 0)
    {
        a = -a; // Convert negative value to positive
    }

    if (b < 0)
    {
        b = -b; // Convert negative value to positive
    }

    while (a != b)
    {
        if (a > b)
        {
            a -= b; // Subtract smaller number from larger number
        }
        else
        {
            b -= a; // Subtract smaller number from larger number
        }
    }
    GCD = a; // GCD is the common value of a and b

    printf("%d", GCD); // Output the GCD
    return 0;
}

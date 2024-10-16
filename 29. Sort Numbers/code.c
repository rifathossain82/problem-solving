#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c)
    {
        // a max
        if (b >= c)
        {
            // b max
            printf("%d\n%d\n%d", c, b, a);
        }
        else
        {
            printf("%d\n%d\n%d", b, c, a);
        }
    }
    else if (b >= a && b >= c)
    {
        // b max
        if (a >= c)
        {
            // a max
            printf("%d\n%d\n%d", c, a, b);
        }
        else
        {
            printf("%d\n%d\n%d", a, c, b);
        }
    }
    else
    {
        // c max
        if (a >= b)
        {
            // a max
            printf("%d\n%d\n%d", b, a, c);
        }
        else
        {
            printf("%d\n%d\n%d", a, b, c);
        }
    }

    printf("\n\n");
    printf("%d\n%d\n%d", a, b, c);
    return 0;
}
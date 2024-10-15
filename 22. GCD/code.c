#include <stdio.h>

int main()
{
    int a, b, gcd;
    scanf("%d %d", &a, &b);

    int n;
    if (a > b)
    {
        n = a;
    }
    else
    {
        n = b;
    }

    for (int i = 1; i <= n; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            gcd = i;
        }
    }

    printf("%d", gcd);
    return 0;
}
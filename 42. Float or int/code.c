#include <stdio.h>

int main()
{
    float n;
    scanf("%f", &n);

    if (n == (int)n)
    {
        printf("int %d", (int)n);
    }
    else
    {
        printf("float %d %.3f", (int)n, n - (int)n);
    }
    return 0;
}
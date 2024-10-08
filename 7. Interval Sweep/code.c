#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    if (a < b && a + 1 == b)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}
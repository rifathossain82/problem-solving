#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n * 2; i++)
    {

        int totalSpace = n - i;
        int totalStar = i * 2 - 1;

        if (i == n)
        {
            totalSpace = 0;
            totalStar = n;
        }
        else if (i > n)
        {
            totalSpace = i - n - 1;
            totalStar = 2 * (2 * n - i) - 1;
        }

        for (int k = 1; k <= totalSpace; k++)
        {
            printf(" ");
        }

        for (int j = 1; j <= totalStar; j++)
        {
            printf("*");
        }

        printf("\n");
    }
}
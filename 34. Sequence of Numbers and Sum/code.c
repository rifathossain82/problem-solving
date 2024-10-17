#include <stdio.h>

int main()
{
    int n, m;
    while(scanf("%d %d", &n, &m) != EOF)
    {
        // break the loop if any of value is equal or less than 0
        if(n <= 0 || m <= 0)
        {
            break;
        }

        // swap (n,m) if n grater than m
        if (n > m)
        {
            int temp = n;
            n = m;
            m = temp;
        }

        // calculate sum and print Sequence of Numbers (inclusive n and m)
        int sum = 0;
        for(int i = n; i <= m; i++)
        {
            sum += i;
            printf("%d ", i);
        }

        // print the sum statement
        printf("sum =%d\n", sum);
    }

    return 0;
}
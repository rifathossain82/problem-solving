# Pattern again - Assignment 2
### [*Problem Link*](https://www.hackerrank.com/contests/c-week-1-a-assignment-2/challenges/n-kites)


<br> 

### Code
```c
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    for (int i = n, p = 1; i >= 1, p <= n; i--, p++)
    {
        for (int k = 1; k <= p; k++)
        {
            printf(" ");
        }

        for (int j = 1; j < i; j++)
        {
            printf("%d", j);
        }

        printf("\n");
    }
    return 0;
}
```
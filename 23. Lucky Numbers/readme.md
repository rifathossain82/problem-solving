# Lucky Numbers
### [*Problem Link*](https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/M)


<br> 

### Code
```c
#include <stdio.h>

int isLuckyNumber(int n)
{
    int temp = n, isLucky = 1;
    while (temp != 0)
    {
        int digit = temp % 10;
        temp = temp / 10;

        if (digit == 4 || digit == 7)
        {
            // Nothing to do.
        }
        else
        {
            isLucky = 0;
        }
    }

    return isLucky;
}

int main()
{
    int a, b, isNoLucky = 1;
    scanf("%d %d", &a, &b);

    for (int i = a; i <= b; i++)
    {
        if (isLuckyNumber(i) == 1)
        {
            printf("%d ", i);
            isNoLucky = 0;
        }
    }

    if (isNoLucky == 1)
    {
        printf("-1");
    }

    return 0;
}
```
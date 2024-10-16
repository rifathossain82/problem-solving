# Mathematical Expression
### [*Problem Link*](https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/W)


<br> 

### Code
```c
#include <stdio.h>

int main()
{
    int a, b, c;
    char s, q;

    scanf("%d %c %d %c %d", &a, &s, &b, &q, &c);

    if (s == '+')
    {
        if (a + b == c)
        {
            printf("Yes");
        }
        else
        {
            printf("%d", a + b);
        }
    }
    else if (s == '-')
    {
        if (a - b == c)
        {
            printf("Yes");
        }
        else
        {
            printf("%d", a - b);
        }
    }
    else
    {
        if (a * b == c)
        {
            printf("Yes");
        }
        else
        {
            printf("%d", a * b);
        }
    }
    return 0;
}
```
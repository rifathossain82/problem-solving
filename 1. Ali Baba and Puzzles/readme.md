# 1. Ali Baba and Puzzles 

### [*Codeforces*](https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/D)


<br> 

### Code:

```c
#include <stdio.h>

int main()
{
    long long int a, b, c, d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

    int isFound = 0;

    if (a + b - c == d)
    {
        isFound = 1;
    }
    else if (a + b * c == d)
    {
        isFound = 1;
    }
    else if (a - b + c == d)
    {
        isFound = 1;
    }
    else if (a - b * c == d)
    {
        isFound = 1;
    }
    else if (a * b + c == d)
    {
        isFound = 1;
    }
    else if (a * b - c == d)
    {
        isFound = 1;
    }

    if(isFound == 0){
        printf("NO");
    } else{
        printf("YES");
    }

    return 0;
}
```
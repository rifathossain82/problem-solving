# Divisors

### [*Codeforces Link*](https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/K)


<br> 

### Code
```c
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        if(n % i == 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
```
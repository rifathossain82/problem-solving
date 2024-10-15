# Primes from 1 to n
### [*Problem Link*](https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/J)


<br> 

### Code
```c
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 2; i <= n; i++)
    {
        int isPrime = 1;
        for (int j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                isPrime = 0;
            }
        }

        if (isPrime == 1)
        {
            printf("%d ", i);
        }
    }

    return 0;
}
```
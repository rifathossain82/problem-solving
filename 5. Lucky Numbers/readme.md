# Lucky Numbers

### [*Codeforces Link*](https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/I)


<br> 

### Code
```c
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int lastDigit = n % 10;
    int firstDigit = n / 10;

    if (lastDigit % firstDigit == 0 || firstDigit % lastDigit == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}
```
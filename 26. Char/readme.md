# Char
### [*Problem Link*](https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/N)


<br> 

### Code
```c
#include <stdio.h>

int main()
{
    char x;
    scanf("%c", &x);

    if (x >= 'a' && x <= 'z')
    {
        printf("%c", x - 32);
    }
    else
    {
        printf("%c", x + 32);
    }

    return 0;
}
```
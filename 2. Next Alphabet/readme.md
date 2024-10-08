# 2. Next Alphabet

### [*Codeforces Link*](https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/C)


<br> 

### Code:

```c
#include <stdio.h>

int main()
{
    char ch;
    scanf("%c", &ch);

    if (ch == 'z')
    {
        printf("a");
    }
    else
    {
        printf("%c", ch + 1);
    }

    return 0;
}
```
# Float or int
### [*Problem Link*](https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/U)


<br> 

### Code
```c
#include <stdio.h>

int main()
{
    float n;
    scanf("%f", &n);

    /// Check the number is integer or float
    if (n == (int)n)
    {
        printf("int %d", (int)n);
    }
    else
    {
        printf("float %d %.3f", (int)n, n - (int)n);
    }
    return 0;
}
```
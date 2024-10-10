# Positions in array

### [*Codeforces Link*](https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/D)


<br> 

### Code
```c
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];

    /// Take input for array:
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= 10)
        {
            printf("A[%d] = %d\n", i, arr[i]);
        }
    }

    return 0;
}
```
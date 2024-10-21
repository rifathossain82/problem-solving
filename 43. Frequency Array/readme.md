# Frequency Array
### [*Problem Link*](https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/V)


<br> 

### Code
```c
#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int arr[n];

    // Take input:
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // 
    for (int i = 0; i < m; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] == arr[i])
            {
                count++;
            }
        }

        printf("%d\n", count);
    }

    return 0;
}
```
# Zeros and Ones 01 - Assignment 2
### [*Problem Link*](https://www.hackerrank.com/contests/c-week-1-a-assignment-2/challenges/zeroes-and-ones-1-1/problem)


<br> 

### Code
```c
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n, totalZero = 0, totalOne = 0;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);

        if (arr[i] == 0)
        {
            totalZero++;
        }

        if (arr[i] == 1)
        {
            totalOne++;
        }
    }

    printf("%d %d", totalZero, totalOne);

    return 0;
}
```
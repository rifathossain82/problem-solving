# Palindrome
### [*Problem Link*](https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/I)


<br> 

### Code
```c
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int temp = n, reversedNumber = 0;
    while (temp != 0)
    {
        int digit = temp % 10;
        reversedNumber = (reversedNumber * 10) + digit;
        temp = temp / 10;
    }

    printf("%d\n", reversedNumber);
    if (reversedNumber == n)
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
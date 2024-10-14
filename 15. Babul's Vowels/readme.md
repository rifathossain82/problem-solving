# Babul's Vowels - Assignment 2

### [*Problem Link*](https://www.hackerrank.com/contests/c-week-1-a-assignment-2/challenges/vowels-27/problem)


<br> 

### Code
```c
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    char ch;
    scanf("%c", &ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        printf("Vowel");
    }
    else
    {
        printf("Consonant");
    }

    return 0;
}
```
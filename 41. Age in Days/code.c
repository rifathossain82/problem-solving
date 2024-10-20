#include <stdio.h>

int main()
{
    int age;
    scanf("%d", &age);

    int years = age / 365;
    int months = (age % 365) / 30;
    int days = (age % 365) % 30;

    printf("%d years\n%d months\n%d days", years, months, days);
    return 0;
}
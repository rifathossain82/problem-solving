#include <stdio.h>

int main()
{
    long long int n, m;
    scanf("%lld %lld", &n, &m);

    int lastDigitOfN = n % 10;
    int lastDigitOfM = m % 10;

    printf("%d", lastDigitOfN + lastDigitOfM);
    return 0;
}
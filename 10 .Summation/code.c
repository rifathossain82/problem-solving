#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    long long arr[n];
    long long int sum = 0;

    for(int i = 0; i < n; i++){
        scanf("%lld", &arr[i]);
        sum += (arr[i]);
    }

    /// To find absulate sum if it's below from 0:
    if(sum < 0){
        sum = sum * (-1);
    }

    printf("%lld", sum);

    return 0;
}
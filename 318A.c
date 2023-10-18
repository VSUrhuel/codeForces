#include <stdio.h>

int main() 
{
    long long int n, k;
    scanf("%lld %lld", &n, &k);

    if (k <= (n + 1) / 2) 
    {
        printf("%lld\n", 2 * k - 1);
    } 
    else 
    {
        k -= (n + 1) / 2;
        printf("%lld\n", 2 * k);
    }

    return 0;
}

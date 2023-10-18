#include <stdio.h>
#include <math.h>

int main()
{
	long long sumOdd, sumEven, cOdd, ans, n;
	scanf("%lld", &n);
	printf("%lld", n);
	sumEven = (n/2) * ((n/2)+1);
	cOdd = (((n/2) % 2) == 0) ? (n/2)+1 : n/2;
	sumOdd = pow(cOdd, 2);

	ans = sumEven - pow(cOdd, 2);
	printf("%lld %lld", sumEven, sumOdd);
	printf("%lld\n", ans);
}
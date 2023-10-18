#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	long long n;
	scanf("%lld", &n);

	long long sum = 0;
	for(long long i=0; i<n-1; i++)
	{
		if(i%2==0)
			sum += (-i-1);
		else
			sum += (i+1);
	}
	long long ans = (n % 2 == 0) ? n + sum : -n + sum;
	printf("%lld\n", ans);
	return 0;
}

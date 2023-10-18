#include <stdio.h>

int main()
{
	long long n, ctr = 0;
	scanf("%lld", &n);
	while(n>0)
	{
		if(n%10==4 || n%10==7)
		{
			ctr++;
		}
		n/=10;
	}
	if(ctr == 7 || ctr == 4)
		printf("YES\n");
	else
		printf("NO\n");
}
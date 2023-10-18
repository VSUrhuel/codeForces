#include <stdio.h>

int main()
{
	int a, b, ctr = 0;
	scanf("%d %d", &a, &b);
	while(a<=b)
	{
		a*=3;
		b*=2;
		ctr++;
	}
	printf("%d\n", ctr);
}
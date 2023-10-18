#include <stdio.h>
#include <math.h>

int main()
{
	int k, n, w;
	scanf("%d %d %d", &k, &n, &w);
	int sum = 0;
	for(int i=1; i<=w; i++)
		sum+=(i*k);
	int borrow = n-sum;
	if(borrow < 0)
		printf("%d\n", abs(borrow));
	else
		printf("0");
}
#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int ctr = n/5;

	if(ctr!=1 && n%5!=0)
		ctr++;
	printf("%d\n", ctr);
}
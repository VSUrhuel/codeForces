#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	while(1)
	{
		n++;
		int a = n%10, b=(n%100)/10, c=(n/100)%10, d=n/1000;
		if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)
		{
			printf("%d\n", n);
			break;
		}
	}
}
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, h, arr[10000], sum=0;
	scanf("%d %d", &n, &h);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
		if(arr[i]>h)
			sum+=2;
		else
			sum++;
	}
	printf("%d\n", sum);
}
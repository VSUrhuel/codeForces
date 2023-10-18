#include <stdio.h>
#include <stdlib.h>

int main()
{
	int arr[10010][2];
	int n, max = 0, curCount = 0;
	scanf("%d", &n);
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<2; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	curCount = arr[0][0]+arr[0][1];
	max = curCount;
	for(int i=1; i<n; i++)
	{
		curCount-=arr[i][0];
		curCount+=arr[i][1];
		if(max < curCount)
			max = curCount;
	}
	printf("%d\n", max);

}
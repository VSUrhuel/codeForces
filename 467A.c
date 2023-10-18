#include <stdio.h>

int main()
{
	int n, ctr = 0;
	int arr[110][2];
	scanf("%d", &n);
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<2; j++)
		{
			scanf("%d", &arr[i][j]);
		}
		if((arr[i][0] + 2) <= arr[i][1])
			ctr++;
		
	}
	printf("%d\n", ctr);
}
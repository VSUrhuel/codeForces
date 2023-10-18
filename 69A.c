#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, sum = 0;
	scanf("%d", &n);
	int** arr = (int**)malloc(sizeof(int*)*n);
	for(int i=0; i<n; i++)
	{
		arr[i] = (int*)malloc(sizeof(int)*3);
	}
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<3; j++)
		{
			scanf("%d", &arr[i][j]);
			sum += (arr[i][j]);
		}
	}
	
	if(sum == 0)
		printf("YES");
	else
		printf("NO");
}
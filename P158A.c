#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, k;
	scanf("%d %d", &n, &k);

	int *arr = (int*)malloc(sizeof(int)*n+1);
	for(int i=1; i<n; i++)
		scanf("%d ",&arr[i]);
    int flag = 0;
	if(arr[k]>0)
	{
		for(int i=k; k<n;k++)
		{
			if(arr[k]<arr[k-1])
			{
				printf("%d\n", k-1);
				printf("%d,",k);
				break;
			}
		}
		flag = 1;
	}
	if(flag)
	{
        printf("%d", n);
	}
    else
    {
		printf("0");
    }

}

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, arr[110];
	scanf("%d", &n);
	for(int i=0; i<n; i++)
		scanf("%d", &arr[i]);

	int max = 0, index = 0;
	for(int i=0; i<n; i++)
	{
		max = 0;
		for(int j=i; j<n; j++)
		{
			if(max < arr[j])
			{
				max = arr[j];
				index = j;
			}
		}
		int temp = arr[i];
		arr[i] = arr[index];
		arr[index] = temp;
		//printf("%d,", arr[i]);
	}


	int sum1 = 0, sum2 = 0, ctr = 0;
	for(int i=0; i<n; i++)
	{
		ctr++;
		sum2 = 0;
		sum1 += arr[i];
		for(int j=i+1; j<n; j++)
		{
			sum2 += arr[j];
		}
		//printf("%d-%d,", sum1, sum2);
		if(sum1 > sum2)
		{
			printf("%d", ctr);
			break;
		}
	}
}
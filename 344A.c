#include <stdio.h>

int main()
{
	int arr[110000], n, ctr = 1, flag=0;
	scanf("%d", &n);
	for(int i=0; i<n; i++)
		scanf("%d", &arr[i]);
	
	if(n==1)
		ctr=1;
	for(int i=0; i<(n-1); i++)
	{
		if(arr[i] != arr[i+1])
		{
			ctr++;			
			
		}
	}
	printf("%d\n", ctr);

}
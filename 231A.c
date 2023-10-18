#include <stdio.h>
#include <stdlib.h>

int main()
{
	int arr[1001][3];
	int n, ctr=0, iCtr=0;
	scanf("%d", &n);
	for(int i=0; i<n; i++)
	{
		iCtr=0;
		for(int j=0; j<3; j++)
		{
			scanf("%d", &arr[i][j]);
			if(arr[i][j])
				iCtr++;
		}
		if(iCtr>1)
			ctr++;
	}
	printf("%d\n", ctr);
}
#include <stdio.h>

int main()
{
	int arr[110], n, flag = 0;
	scanf("%d", &n);
	for(int i=0; i<n; i++)
	{
		scanf("%d", &arr[i]);
		if(arr[i]==1)
			flag = 1;
	}
	if(flag)
		printf("HARD\n");
	else
		printf("EASY\n");

}
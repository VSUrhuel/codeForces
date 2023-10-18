#include <stdio.h>

int main()
{
	int arr[4];
	for(int i=0; i<4; i++)
		scanf("%d", &arr[i]);
	int min = 100000, index = 0;
	for(int i=0; i<4; i++)
	{
		min = 1000000;
		for(int j=i; j<4; j++)
		{
			if(min > arr[j])
			{
				min = arr[j];
				index = j;
			}
		}
		int temp = arr[i];
		arr[i] = arr[index];
		arr[index] = temp;
		printf("%d-", arr[i]);
	}
	if(arr[0]==arr[3])
		printf("3\n");
	else if(arr[0]==arr[1] || arr[1] == arr[2] || arr[1] == arr[3] || arr[0] == arr[2])
		printf("2\n");
	else if(arr[0]!=arr[1] && arr[1] != arr[2] && arr[2]!=arr[3])
		printf("0\n");
	else
		printf("1\n");
}
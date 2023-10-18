#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int *arr = (int*)malloc(sizeof(int)*3);
	int sum = 0;
	for(int i=0; i<3; i++)
	{
		scanf("%d", &arr[i]);
		sum += arr[i];
	}
	int meetPoint = sum / 3;
	int distance = abs(arr[0]-meetPoint) + abs(arr[1]-meetPoint) + abs(arr[2]-meetPoint);
	printf("%d", distance);
}
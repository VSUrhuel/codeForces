#include <stdio.h>
#include <string.h>

int main()
{
	char text[100];
	scanf("%s", text);
	int nums[100], l = strlen(text), index=0;
	for(int i=0; i<l; i++)
	{
		if(i%2==0)
			nums[index++] = text[i] - '0';
	}
	int min = 1000000, in = 0;
	for(int i=0; i<index; i++)
	{
		min = 100000;
		in = 0;
		for(int j=i; j<index; j++)
		{
			if(min > nums[j])
			{
				min = nums[j];
				in = j;
			}
		}
		int temp = nums[i];
		nums[i] = nums[in];
		nums[in] = temp;
	}
	for(int i=0; i<index; i++)
	{
		if(i==(index-1))
			printf("%d", nums[i]);
		else
			printf("%d+", nums[i]);

	}
}
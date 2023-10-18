#include <stdio.h>

int main()
{
	int arr[11] = {4,7,47,74,447,474,477,744,774,777,747};
	int n, flag=0;
	scanf("%d", &n);
	for(int i=0; i<11; i++)
	{
		if(n%arr[i]==0)
		{
			printf("YES\n");
			flag = 1;
			break;
		}
	}
	if(!flag)
		printf("NO\n");
}
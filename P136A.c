//Presents Problem
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n;
	scanf("%d", &n);

	int *friends = (int*)malloc(sizeof(int)*n+1);
	for(int i=1; i<=n; i++)
		scanf("%d ", &friends[i]);

	int ctr = 1;
	while(1)
	{
		for(int i=1; i<=n;i++)
		{
			if(friends[i]==ctr)
			{
				printf("%d ", i);
				ctr++;
			}
		}
		if(ctr == n+1)
				break;
	}
	return 0;
}
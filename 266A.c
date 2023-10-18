#include <stdio.h>
#include <stdlib.h>

int main()
{
	char color[50];
	int n;
	scanf("%d", &n);
	int ctr = 0;
	scanf("%s", color);
	for(int i=0; i<n-1; i++)
	{
		if(color[i]==color[i+1])
			ctr++;
	}
	printf("%d\n", ctr);
		

}
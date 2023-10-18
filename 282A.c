#include <stdio.h>
#include <string.h>

int main()
{
	char text[150][3];
	int n;
	scanf("%d", &n);
	for(int i=0; i<n; i++)
	{
		scanf("%s", text[i][1]);
		printf("%s\n", *text[i]);
	}
}
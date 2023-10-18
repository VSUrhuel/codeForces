#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char plain[1000];
	scanf("%s", plain);
	char cipher[1000];
	scanf("%s", cipher);
	int l = strlen(plain), index = 0, flag = 0;
	for(int i=l-1; i>=0; i--, index++)
	{
		if(plain[i] != cipher[index])
		{
			flag = 1;
			break;
		}
	}
	if(!flag)
		printf("YES\n");
	else
		printf("NO\n");
}
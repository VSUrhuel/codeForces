#include <stdio.h>
#include <string.h>

int main()
{
	char first[110];
	char second[110];
	scanf("%s", first);
	scanf("%s", second);
	int l = strlen(first);
	for(int i=0; i<l; i++)
	{
		if(first[i] == second[i])
			printf("0");
		else
			printf("1");
	}

}
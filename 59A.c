#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int main()
{
	char text[1000];
	scanf("%s", text);
	int l = strlen(text);
	int ctr = 0;
	for(int i=0; i<l; i++)
	{
		if(isupper(text[i]))
			ctr++;
	}
	//printf("%d, %d,",ctr, l);
	if(ctr > (l/2))
	{
		for(int i=0; i<l; i++)
			printf("%c", toupper(text[i]));
	}
	else if(ctr < (l/2))
	{
		for(int i=0; i<l; i++)
			printf("%c", tolower(text[i]));
	}
	else
	{
		for(int i=0; i<l; i++)
			printf("%c", tolower(text[i]));
	}
}
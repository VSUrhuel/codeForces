#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char text[1000000];
	scanf("%s", &text);
	int l = strlen(text);
	for(int i=0; i<l; i++)
	{
		if(i==0)
			printf("%c", toupper(text[i]));
		else
			printf("%c", text[i]);
	}
}
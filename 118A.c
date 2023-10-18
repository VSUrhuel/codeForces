#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char text[102];
	scanf("%s", text);
	int l = strlen(text);
	char newText[102];
	int index = 0;
	for(int i=0; i<l; i++)
	{
		text[i] = tolower(text[i]);
		if(text[i]!='a' && text[i]!='e' && text[i]!='i' && text[i]!='u' && text[i]!='o' && text[i]!='y')
			newText[index++] = text[i];
	}
	for(int i=0; i<index; i++)
	{
		printf(".%c", newText[i]);
	}
}
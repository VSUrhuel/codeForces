#include <stdio.h>
#include <string.h>

int main()
{
	char text[110];
	scanf("%s", text);
	int l = strlen(text), flag = 0;
	for(int i=0; i<l; i++)
	{
		if(text[i]=='H' || text[i]=='Q' || text[i]=='9')
		{
			printf("YES\n");
			flag = 1;
			break;
		}
	}
	if(!flag)
		printf("NO\n");
}
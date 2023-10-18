#include <stdio.h>
#include <string.h>

int main()
{
	char text[100010];
	int n;
	scanf("%d", &n);
	for(int i=0; i<=n; i++)
		scanf("%c", &text[i]);
	int aCtr = 0, dCtr = 0;
	for(int i=0; i<=n; i++)
	{
		if(text[i]=='A')
		{
			aCtr++;
		}
		else if(text[i]=='D')
			dCtr++;
	}
	if(aCtr > dCtr)
		printf("Anton\n");
	else if(aCtr < dCtr)
		printf("Danik\n");
	else
		printf("Friendship\n");
}
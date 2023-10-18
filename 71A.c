#include <stdio.h>
#include <string.h>

int main()
{
	char text[110];
	int n;
	scanf("%d", &n);
	getchar();
	for(int i=0; i<n; i++)
	{
		fgets(text, sizeof(text), stdin);  
        text[strcspn(text, "\n")] = '\0';

		int l = strlen(text);
		if(l>10)
		{
			printf("%c%d%c\n", text[0], l-2, text[l-1]);
		}
		else
			printf("%s\n", text);
	}

}
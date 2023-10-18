#include <stdio.h>

int main()
{
	int n, t;
	scanf("%d %d", &n, &t);
	char text[60];
	scanf("%s", text);
	for(int i=0; i<t; i++)
	{
		for(int j=0; j<n; j++)
		{
			if(text[j]=='G' && (j-1)>=0)
			{
				int temp = text[j];
				text[j] = text[j-1];
				text[j-1] = temp;
				j++;
			}
		}
	}
	for(int i=0; i<n; i++)
		printf("%c", text[i]);
}
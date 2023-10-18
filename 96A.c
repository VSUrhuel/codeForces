#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char text[100];
	scanf("%s", text);
	int l = strlen(text);
	int oCtr = 1, zCtr = 1, oFlag = 1, zFlag = 1;
	for(int i=0; i<l; i++)
	{
		if(text[i]=='0' && text[i-1]=='0')
		{
			zCtr=1;
			oCtr++;
		}
		else if(text[i]=='1' && text[i-1]=='1')
		{
			oCtr=1;
			zCtr++;
		}
		else
		{
			oCtr=1;
			zCtr=1;
		}
		
		if(zCtr==7 || oCtr==7)
		{
			printf("YES\n");
			break;
		}
		//printf("%d,", zCtr);
	}
	if(zCtr!=7 && oCtr!=7)
		printf("NO\n");

}
#include <stdio.h>
#include <string.h>

int main()
{
	char text[1010], newText[1010];
	scanf("%s", &text);
	int l = strlen(text);
	int index = 0, flag = 0;
	for(int i=0; i<l; i++)
	{
		for(int j=0; j<l; j++)
		{
			if(text[i]==text[j] && i!=j)
			{
				flag=1;
				printf("%d", j);
				break;
			}
		}
		//printf("%d", flag);
		if(!flag)
			newText[index++] = text[i];
	}

	int ans = strlen(newText);
	printf("%d,", ans);
	if(ans%2==0)
		printf("CHAT WITH HER!\n");
	else
		printf("IGNORE HIM!\n");
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char text1[100];
    scanf(" %s",text1);
    char text2[100];
    scanf(" %s",text2);
    int flag = 0;
   for(int i=0; i < strlen(text1) || i<strlen(text2); i++)
   {
       if(text1[i]<text2[i])
       {
           printf("-1");
           flag = 1;
           return;
       }
       else if(text1[i]>text2[i])
       {
           printf("1");
           flag = 1;
            return;
       }
   }
   if(strlen(text1) == 0&& !flag)
            printf("-1");
    else if(strlen(text2) == 0 && !flag)
        printf("1");
    else if(!flag)
        printf("0");
}

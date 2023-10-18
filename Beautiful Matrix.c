#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matrix[5][5];
    for(int i=0; i<5; i++)
        for(int j=0; j<5; j++)
            scanf("%d", &matrix[i][j]);

    int count = 0;
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            if(matrix[i][j] && i==2 && j==2)
                printf("%d", count);
            else if(matrix[i][j])
            {
                int moveRow = abs(i-2);
                int moveCol = abs(j-2);
                printf("%d", (moveRow+moveCol));
            }


        }
    }
}

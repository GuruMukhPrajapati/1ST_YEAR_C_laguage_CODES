#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 3; i++)
    {
        for (j=1;j<=2;j++)
        {
            if (j>=6-i & & j<=3+1 )
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
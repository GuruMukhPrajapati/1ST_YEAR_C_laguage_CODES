/*

     *
    * *
   * * *
  * * * *
 * * * * *

*/

#include <stdio.h>
#include <conio.h>
int main()
{
    int n, s, i, j;
    clrscr();
    printf("Enter number of rows: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (s = i; s < n; s++)
            printf(" ");
        for (j = 1; j <= i; j++)
            printf("* ");
        printf("\n");
    }
    getch();
    return 0;
}
#include <stdio.h>

int main()
{
    int i = 1,n=0;
   printf("enter the range of counting :");
    scanf("%d", &n);

    while (i<=n){
    printf("\n%d", i);
    i++;
    }
    return 0;
}
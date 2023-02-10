#include <stdio.h>
#include<conio.h>

void main(){

int first=0,second=1,third,i,n;
clrscr();
printf("how many elements : ");
scanf("%d",&n);
// printf("\n%d \n%d",first,second);
for (i=2;i<n;++i)
{
    third=first+second;
    printf("\n%d",third);
    first=second;
    second=third;
}
getch();
}
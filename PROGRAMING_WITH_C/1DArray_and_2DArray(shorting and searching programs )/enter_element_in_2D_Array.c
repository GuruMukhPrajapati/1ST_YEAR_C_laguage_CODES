#include <stdio.h>

int main(){
int a[10][10],i,j,r,c;
printf("how many row and cols : ");
scanf("%d%d",&r,&c);
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++){
        printf("enter element : ");
        scanf("%d",&a[i][j]);

    }
}
printf("two dimentinol array is : \n\n");
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    printf("%d\t",a[i][j]);
    printf("\n");
}
return 0;
}
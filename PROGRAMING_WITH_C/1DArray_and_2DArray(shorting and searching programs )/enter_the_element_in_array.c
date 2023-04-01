#include <stdio.h>

int main(){
int a[10],i,n;
printf("how many element : ");
scanf("%d",&n);
for(i=0;i<n;i++){
    printf("enter element : ");
    scanf("%d",&a[i]);
}
printf("\n array is : \n");
for(i=0;i<n;i++){
printf("%d \n",a[i]);
}
return 0;
}
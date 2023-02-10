#include<stdio.h>
#include<conio.h>
void main() {
	int n,i;
	int sum=0;
    clrscr();
	printf("Enter the max values of series: ");
	scanf("%d",&n);
	sum = (n * (n + 1)) / 2;
	printf("Sum of the series: ");
	for (i =1;i <= n;i++) {
		if (i!=n)
		             printf("%d + ",i); else
		             printf("%d = %d ",i,sum);
	}
	getch();
}
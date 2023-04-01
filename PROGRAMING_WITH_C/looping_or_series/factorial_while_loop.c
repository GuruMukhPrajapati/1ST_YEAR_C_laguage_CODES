#include <stdio.h>
#include<conio.h>
int main() {
    int n, i=1,factorial = 1;
    clrscr();
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    while (i <= n) {
        factorial = factorial * i;
        printf("%d\n",factorial);
     
       i =i+1;
    }
getch();
}
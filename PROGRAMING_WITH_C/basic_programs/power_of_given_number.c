#include <stdio.h>
#include <conio.h>
#include <math.h
void main() {
    int num, power;
    int result;
    clrscr();
    printf("Enter the base number: ");
    scanf("%d", &num);
    
    printf("Enter the exponent: ");
    scanf("%d", &power);
    
    result = pow(num, power);
    
    printf("%d",result);
    
    getch();
}
#include <stdio.h>
#include <conio.h>
void main()
{
    int num1, num2;
    clrscr();
    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);

    if (num1 < num2)
        printf("%d is minimum", num1);
    else
        printf("%d is minimum", num2);

    getch();
}

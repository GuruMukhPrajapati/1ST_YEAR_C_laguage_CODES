#include <stdio.h>
#include <conio.h>
void main()
{
    int num1, num2, num3;
    printf("Enter three numbers: ");
    clrscr();
    scanf("%d%d%d", &num1, &num2, &num3);

    if (num1 > num2 && num1 > num3)
        printf("%d is maximum", num1);
    else if (num2 > num1 && num2 > num3)
        printf("%d is maximum", num2);
    else
        printf("%d is maximum", num3);

    getch();
}

#include <stdio.h>
#include <conio.h>
void main()
{
    float a, p, t, r, b = 1, i, ci, si;
    clrscr();
    printf("enter p,r,t :");
    scanf("%f%f%f", &p, &r, &t);
    si = p * t * r / 100;
    a = 1 + r / 100;
    for (i = 1; i < 10; i++);
    {
        b = b * a;
    }
    ci = p * b;
    printf("\n ci : %f", ci);
    printf("\n si : %f", si);
    printf("\n diffrence berween ci and si : %f", ci - si);
    getch();
}
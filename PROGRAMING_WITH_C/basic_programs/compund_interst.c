#include <stdio.h>
#include <math.h>

int main()
{
    float p, r, t, CI;
    printf("Enter the principal amount: ");
    scanf("%f", &p);
    printf("Enter the rate of interest: ");
    scanf("%f", &r);
    printf("Enter the number of years: ");
    scanf("%f", &t);
    CI = p * pow((1 + (r / 100)),t);
    printf("Compound interest is: %f\n",CI);
    return 0;
}

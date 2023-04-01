#include <stdio.h>

int main()
{
    int i;
    char st[10];
    printf("enter the cap string : ");
    scanf("%s", &st);
    for (i = 0; st[i] != '\0'; i++)
        st[i] = st[i] + 32;
    printf("\n small string is : %s", st);

    return 0;
}

// FOR SMALL TO CAP 
//st[i]=st[i]-32
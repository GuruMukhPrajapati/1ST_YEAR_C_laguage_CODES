#include <stdio.h>

int main() {
    char st[10];
    int i, v = 0;

    printf("enter the string : ");
    scanf("%s", st);

    for (i = 0; st[i] != '\0'; i++) {
        if (st[i] == 'A' || st[i] == 'a')
            v = v + 1;
        else if (st[i] == 'E' || st[i] == 'e')
            v = v + 1;
        else if (st[i] == 'I' || st[i] == 'i')
            v = v + 1;
        else if (st[i] == 'O' || st[i] == 'o')
            v = v + 1;
        else if (st[i] == 'U' || st[i] == 'u')
            v = v + 1;
    }

    printf("\n no of vowel in %s string are : %d", st, v);
    return 0;
}
/*
enter the string : GOURAV
no of vowel in GOURAV string are : 3
*/
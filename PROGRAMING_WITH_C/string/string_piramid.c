#include <stdio.h>

int main() {
    char st[10];
    int i,j;
    printf("Enter the string: ");
    scanf("%s", st);
    for (i=0; st[i]!='\0'; i++) {
        for (j=0; j<=i; j++)
            printf("%c", st[j]);
        printf("\n");
    }
    return 0;
}

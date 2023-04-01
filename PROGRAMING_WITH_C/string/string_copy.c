#include <stdio.h>

int main() {
    char a[10], b[10];
    int i, j;
    printf("Enter the string: ");
    scanf("%s", b);
    for(i=0; b[i]!='\0'; i++) {
        a[i] = b[i];
        
    }
    a[i] = '\0';

    printf("Copied string is: %s\n", a);
    return 0;
}

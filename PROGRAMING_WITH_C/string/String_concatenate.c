#include <stdio.h>

int main() {
    char a[20], b[10];
    int i, j;

    printf("Enter the first string: ");
    scanf("%s", a);

    printf("Enter the second string: ");
    scanf("%s", b);

    for (i = 0; a[i] != '\0'; i++);

    for (j = 0; b[j] != '\0'; j++) {
        a[i] = b[j];
        i++;
    }

    a[i] = '\0';

    printf("Concatenated string is: %s", a);

    return 0;
}

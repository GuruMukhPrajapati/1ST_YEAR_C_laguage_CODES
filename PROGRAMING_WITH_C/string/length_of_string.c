#include <stdio.h>

int main() {
    char st[100]; // declare an array to store the string
    int i, c = 0;
    printf("Enter a string: ");
    scanf("%s", st);
    for (i = 0; st[i] != '\0'; i++) {
        c = c + 1;
    }
    printf("Length is: %d\n", c);
    return 0;
}

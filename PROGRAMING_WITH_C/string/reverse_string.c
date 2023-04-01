#include <stdio.h>
#include <string.h>

int main(){
    int i;
    char st[100];
    printf("Enter the string: ");
    scanf("%s", st);
    printf("Reverse string is: ");
    for (i = strlen(st) - 1; i >= 0; i--) {
        printf("%c", st[i]);
    }
    return 0;
}

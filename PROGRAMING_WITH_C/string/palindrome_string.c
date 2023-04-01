#include <stdio.h>
#include <string.h>

int main() {
    char a[20];
    int i, j, f=0;
    printf("Enter the string: ");
    scanf("%s", a);
    j = strlen(a) - 1;
    for(i=0; i<j; i++,j--) {
        if(a[i] != a[j]) {
            f = 1;
            break;
        }
    }
    if(f == 0)
        printf("%s is a palindrome.\n", a);
    else
        printf("%s is not a palindrome.\n", a);
    return 0;
}

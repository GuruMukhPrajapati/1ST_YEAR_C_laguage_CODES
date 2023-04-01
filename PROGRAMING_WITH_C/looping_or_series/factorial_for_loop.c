#include <stdio.h>

int main() {
    int n, i;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    int factorial = 1;
    for (i = 1; i <= n; i++) {
        factorial = factorial * i;
        printf("%d\n" ,factorial);
    }
    return 0;
}
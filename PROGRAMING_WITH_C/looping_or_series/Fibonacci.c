#include <stdio.h>

int main() {
    int n, i = 0;
    int o = 1, j = 2, k;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: %d, %d, ", o,j);

    while (o <= n) {
        k = o + j;
        printf("%d", k);
        o = j;
        j = k;
        i++;
    }
    return 0;
}
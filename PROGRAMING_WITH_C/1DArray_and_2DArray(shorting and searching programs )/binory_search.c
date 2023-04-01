#include <stdio.h>
#include <conio.h>
void main() {
    int a[20], i, n, val, first, last, mid, f = 0;
    clrscr();
    printf("Enter how many elements: ");
    scanf("%d", &n);
    printf("Enter the element in sorted order:");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Array is:\n");
    for (i = 0; i < n; i++) {
        printf("%d\n", a[i]);
    }

    printf("Enter the searching element: ");
    scanf("%d", &val);

    first = 0;
    last = n - 1;

    while (first <= last) {
        mid = (first + last) / 2;

        if (val < a[mid]) {
            last = mid - 1;
        } else if (val > a[mid]) {
            first = mid + 1;
        } else if (val == a[mid]) {
            f = 1;
            break;
        }
    }

    if (f == 1) {
        printf("%d element is found", val);
    } else {
        printf("%d element is not found", val);
    }
getch();

}


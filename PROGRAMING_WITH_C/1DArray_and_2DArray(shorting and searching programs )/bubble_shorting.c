#include <stdio.h>
#include <conio.h>
void main()
{
    int a[20], i, j, n, t, c = 0, f = 0;
    clrscr();
    printf("Enter how many elements: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter element: ");
        scanf("%d", &a[i]);
    }
    printf("\nUnsorted array is:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
    for (i = 0; i < n; i++)
    {
        f = 0;
        for (j = 0; j < n - 1; j++)
        {
            c++;
            if (a[j] > a[j + 1])
            {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
                f = 1;
            }
        }
        if (f == 0)
        {
            break;
        }
    }
    printf("\nSorted array is:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
    printf("\nTotal comparisons: %d", c);
        getch();
}

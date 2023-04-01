#include <stdio.h>
#include <conio.h>

int main()
{
    int a[10], n, i, vol, f = 0;
    clrscr();

    printf("Enter the size of the array (max 10): ");
    scanf("%d", &n);

    printf("Enter the elements of the array: \n");
    for (i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("\n Array is: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\nEnter the search element: ");
    scanf("%d", &vol);

    for (i = 0; i < n; i++)
    {
        if (a[i] == vol)
        {
            f = 1;
            break;
        }
    }

    if (f == 1)
    {
        printf("\nElement found at index %d", i);
    }
    else
    {
        printf("\nElement not found");
    }

    getch();
}

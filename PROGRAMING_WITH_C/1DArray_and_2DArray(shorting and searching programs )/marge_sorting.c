#include <stdio.h>
#include<conio.h>
void main(){
    int a[20], b[20], c[40], i, j, k, m, n;
    clrscr();
    
    printf("Enter how many elements in first array: ");
    scanf("%d", &m);
    
    printf("Enter how many elements in second array: ");
    scanf("%d", &n);
    
    printf("\nInsert elements in first array a[]:\n");
    for(i=0; i<m; i++){
        printf("Enter element :\t");
        scanf("%d", &a[i]);
    }
    
    printf("\nInsert elements in second array b[]:\n");
    for(i=0; i<n; i++){
        printf("Enter element :\t");
        scanf("%d", &b[i]);
    }
    
    i=0;
    j=0;
    k=0;
    
    while((i<m)&&(j<n)){
        if(a[i]<b[j]){
            c[k]=a[i];
            i++;
            k++;
        }
        else if(a[i]>b[j]){
            c[k]=b[j];
            j++;
            k++;
        }
        else{
            c[k]=a[i];
            i++;
            j++;
            k++;
        }
    }
    
    if(i<m){
        for(; i<m; i++){
            c[k]=a[i];
            k++;
        }
    }
    else if(j<n){
        for(; j<n; j++){
            c[k]=b[j];
            k++;
        }
    }
    
    printf("\nFirst array: \n\t");
    for(i=0; i<m; i++){
        printf("%d ", a[i]);
    }
    
    printf("\nSecond array: \n\t");
    for(i=0; i<n; i++){
        printf("%d ", b[i]);
    }
    
    printf("\nMerged sorted array: \n\t");
    for(i=0; i<k; i++){
        printf("%d ", c[i]);
    }
    
    getch();
}

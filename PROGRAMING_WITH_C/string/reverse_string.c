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
  
=======================================================================================
// code with out using libarary funcation (strlen) 
// this is another code worked same 
=======================================================================================

#include <stdio.h>

int main()
{
    int i;
    char st[100];
    printf("enter the string : ");
    scanf("%s", &st);
   
    printf("the reverse string is : ");
    for (i = 0; st[i] != '\0'; i++);
    
    for (i = i - 1; i >= 0; i--)
     {
        printf("%c", st[i]);
     }
    
    return 0;
}

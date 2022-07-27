#include <stdio.h>
#include <string.h>

void main(){
    char x[500];
    printf("\nEnter the string: ");
    gets(x);
    printf("\nLength of the string '%s' is: %d\n", x, strlen(x));
    /*int size = 0;
    for(int i = 0; x[i] != '\0'; i++)
        size++;
    printf("\nSize = %d\n", size);*/
}

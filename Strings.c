#include <stdio.h>
#include <string.h>


int main()
{
    char string1[50];
    char string2[50];
    char string3[100];
    printf("Enter the first string: ");
    gets(string1);
    printf("Enter the second string: ");
    gets(string2);
    strcat(string1, " ");
    strcat(string1, string2);
    strcpy(string3, string1);

    puts(string3);



}
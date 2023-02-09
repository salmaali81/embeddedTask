#include <stdio.h>

int main(){
    int myage;
    printf("Enter age");
    scanf(" %d", &myage);
    fflush(stdout);
    printf("Your age is %d", myage);
}
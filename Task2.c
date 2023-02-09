#include <stdio.h>

int main(){
    int age;
    printf("Enter age");
    scanf(" %d", &age);
    fflush(stdout);
    printf("Your age is %d", age);
}
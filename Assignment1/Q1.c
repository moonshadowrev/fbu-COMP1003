#include <stdio.h>

// Question 1: Find the greatest number among three numbers entered by the user from the keyboard.
int main(){
    // a, b, c are three numbers
    int a, b, c;
    // Print to user that we need inputs
    printf("%s", "Enter three numbers: \n");
    // Take inputs from user
    scanf("%d %d %d", &a, &b, &c);
    // Checks for Greatest number
    if ( a > b ) {
        if ( a > c ) {
            printf("%d %s", a," is the greatest number \n");
        } else {
            printf("%d %s", c, " is the greatest number \n");
        }
    } else {
        if ( b > c ) {
            printf("%d %s", b, " is the greatest number \n");
        } else {
            printf("%d %s", c, " is the greatest number \n");
        }
    }
    return 0;
}



#include <stdio.h>

int main(){
    int a, b, c;
    // Print to user that we need inputs
    printf("%s", "Enter three numbers: \n (Press Enter after each number) \n");
    // Take inputs from user
    scanf("%d %d %d", &a, &b, &c);
    // In this case we are using nested if else
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
    // Exit code 0 means successful termination
    return 0;
}

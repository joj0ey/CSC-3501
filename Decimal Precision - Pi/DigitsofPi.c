#include <stdio.h>

// Exercise 2: Store and compare the value of PI with different precision levels

int main(){
    // 2 variables to store the value of pi
    float f = 3.141592653589793;
    double d = 3.141592653589793;

    printf("Float (f): %.15f\n",f);
    printf("Double (d): %.15d\n", d);

    return 0;
}


/*
QUESTIONS
a. Are the printed values the same?
    No. The output values are:
        Float (f): 3.141592741012573
        Double (d): 000001413754136
b. Which one correctly represents the value of pi?
    The float outputs the corrrect value.
c. If the values are not the same, explain why that happens.
    The "double" data type doesn't allow for the precision needed to represent the digits of pi at that level.
*/

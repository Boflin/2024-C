/*
    Cory Mischiek
    ClassWork from 2024-01-11
    https://www.youtube.com/watch?v=eqv9SgyZuII&ab_channel=DAndrewsNSCC
*/

#include <stdio.h>

int main() {

    // declare our variables 'a' and 'b'
    int a = 15;
    long b = 2126322;
    float c = 6.02e+2; //float c = 602.00;
    double d = 3.3e-18;
    char e = 'z';

    // This is Supposed to print out b\a (b divided by a) is {formatted answer}
    printf("b\a is %ld\n", b/a);  // Output:  'b is 141754'  Not what we expect

    // In order to fix this make sure atleast 1 of the numbers is a real number (float, double) to recieve a decimal result, and escape the escape.
    printf("b\\a is %ld\n", b/a);  // Output:  'b\a is 141754' 

    // Finally let's get the decimal by changing the placeholder from %ld to %f and adding 1.0*b/a to the end of our fString
    printf("b\\a is %f\n", 1.0*b/a); // Output: b\a is 141754.800000

    // Another Way to do it using order of operations
    printf("b\\a is %f\n", (0.0 + b)/a);

    // Using Type Casting
    printf("b\\a is (Type casting to double) =  %f\n", (double)b/a); // Output: 'b\a is 141754.800000'
    // (placing the type in here) before the variable will make it treated as that type in THIS INSTANCE only.
    printf("b\\a is (Type casting to float) =  %f\n", (float)b/a); // Output: 'b\a is 141754.796875'
    printf("b\\a is (Type casting to Int) =  %f\n", (int)b/a); // Output: 'b\a is 0.000000'

    // %f is floating point,  %.2f maps 20 decimal places
    printf("c is %f, d is %.20f\n", c, d);

    // final return statement
    return 0;
}
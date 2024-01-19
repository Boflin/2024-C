/*
    Author: Cory Mischiek
    Date: 2024-01-13
    Description: An application that takes 2 numbers from the user and then performs 
        addition, subtraction, multiplication and division on those 2 numbers. Returning the 
        result of each problem to the user.
*/

#include <stdio.h>

// function to add two numbers
float addThem(float x, float y) {
    return x + y;
}

// function to subtract two numbers
float subtractThem(float x, float y) {
    return x - y;
}

// function to multiply two numbers
float multiplyThem(float x, float y) {
    return x * y;
}

// function to divide two numbers
float divideThem(float x, float y) {
    if (y != 0) {
        return x / y;
    } else {
        puts("Sorry, you can't divide by 0! \n");
    }
}

int main() {
    // declare variables for user input
    float num1, num2 = 0;

    // get the user input
    puts("Enter the first number:");
    scanf("%f", &num1);

    // flush the buffer 
    int ch;
    while ( ( ch = getchar() ) != '\n' && ch != EOF );

    puts("Enter the second number:");
    scanf("%f", &num2);
    while ( ( ch = getchar() ) != '\n' && ch != EOF ); // flush the Buffer


    // Perform math operations and display results
    printf("%.2f plus %.2f is %.2f\n", num1, num2, addThem(num1, num2));
    printf("%.2f minus %.2f is %.2f\n", num1, num2, subtractThem(num1, num2));
    printf("%.2f multiplied by %.2f is %.2f\n", num1, num2, multiplyThem(num1, num2));
    printf("%.2f divided by %.2f is %.2f\n", num1, num2, divideThem(num1, num2));

    // final return statement
    return 0;


    /*
        Tests Ran: 
        
    */
}
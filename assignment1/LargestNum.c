/*
    Author: Cory Mischiek
    Date: 2024-01-13
    Description: Collect 3 numbers from the user, then using a funciton 
        we find the largest of the 3 numbers and return it to the user.
*/

#include <stdio.h>

// function to find the largest of the 3 numbers
int findLargest(int num1, int num2, int num3) {
    if (num1 >= num2 && num1 >= num3) {
        return num1;
    } else if (num2 >= num1 && num2 >= num3) {
        return num2;
    } else if (num3 >= num1 && num3 >= num2) {
        return num3;
    }
}

int main() {
    // declare variables for the three numbers
    int num1, num2, num3 = 0;

    // get the users input
    puts("Enter the first number:");
    scanf("%d", &num1);

    // Flush the buffer
    int ch;
    while ( ( ch = getchar() ) != '\n' && ch != EOF );

    puts("Enter the Second number:");
    scanf("%d", &num2);
    while ( ( ch = getchar() ) != '\n' && ch != EOF );

    puts("Enter the third number");
    scanf("%d", &num3);
    while ( ( ch = getchar() ) != '\n' && ch != EOF );

    // call the function and display the result
    int largestNum = findLargest(num1, num2, num3);
    printf("\nThe largest number of %d, %d, %d is %d\n", num1, num2, num3, largestNum);

    // final return statement 
    return 0;
}

/*
    Test's Ran:
    
*/
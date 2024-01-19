/*
    Author: Cory Mischiek
    Date: 
    Description: An application that will prompt you to enter your hourly wage & hours worked,
    and then calculates your gross pay, based off of that it'll tell you your tax rate. And then give
    you a pay summary including Gross Pay, Net Pay, Tax Rate, and Tax withheld. 
*/

#include <stdio.h>

// function to find out the taxRate based on the gross pay
float calculateTax(float grossPay) {
    if (grossPay <= 450.00) {
        return 0.10; // 10% held
    } else if (grossPay <= 600.00) {
        return 0.12; // 12% held
    } else if (grossPay <= 1000.00) {
        return 0.15; // 15% held
    } else {
        return 0.20; // 20% held
    }
}

int main() {

    // declare variables
    float hourlyRate = 0;
    float hoursWorked = 0;
    float grossPay = 0;
    float netPay = 0;
    float heldTax = 0;
    float taxRate = 0;

    // get hourly rate and hours worked from user
    puts("Please Enter your hourly rate:");
    scanf("%f", &hourlyRate);

    // Flush the buffer
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF);

    puts("Please enter the hours you've worked:");
    scanf("%f", &hoursWorked);
    while ((ch = getchar()) != '\n' && ch != EOF);

    // Calculate the gross pay
    grossPay = hourlyRate * hoursWorked;

    // Get the tax rate directly
    taxRate = calculateTax(grossPay);

    // Calculate the tax
    heldTax = grossPay * taxRate;

    // Calculate net pay
    netPay = grossPay - heldTax;

    // Output the results
    puts("\n\n********** Pay Summary **********");
    printf("\nGross Pay:\t$%.2f\n", grossPay);
    printf("Tax Rate:\t%.2f%%\n", taxRate * 100); // Display tax rate as percentage
    printf("Tax Withheld:\t$%.2f\n", heldTax);
    printf("Net Pay:\t$%.2f\n", netPay);

    return 0;
}

/*
    Tests Ran:
    Hourly Wage -  20 
    Hours worked - 40
                =  800   [passed]

    tax rate = (800 = 12% [passed])   
    
    Hourly Wage -  10 
    Hours worked - 40
    =              400   [passed]

    tax rate = (400 = 10% [passed])


*/
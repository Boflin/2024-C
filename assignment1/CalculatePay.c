/*
    Author: Cory Mischiek
    Date: 
    Description: An application to calculate gross and net pay based on hours worked and
        paycheck amount. Tax rate will be based on amount earned. 
*/

#include <stdio.h>

// function to find out the taxRate based on the gross pay 
float calculateTax(float grossPay) {
    if (grossPay <= 450.00) {
        return grossPay * 0.10; // 10% held 
    } else if (grossPay <= 600.00) {
        return grossPay * 0.12; // 12% held
    } else if (grossPay <= 1000.00) {
        return grossPay * 0.15; // 15% held
    } else {
        return grossPay * 0.20; // 20% held 
    }
}

int main() {

    // declare variables
    float hourlyRate = 0;
    float hoursWorked = 0;
    float grossPay = 0;
    float netPay = 0;
    float heldTax = 0;

    // get hourly rate and hours worked from user
    puts("Please Enter your hourly rate:");
    scanf("%f", &hourlyRate);
    
    // Flush the buffer
    int ch;
    while ( ( ch = getchar() ) != '\n' && ch != EOF );

    puts("Please enter the hours you've worked:");
    scanf("%f", &hoursWorked);
    while ( ( ch = getchar() ) != '\n' && ch != EOF );

    // Calculate the gross pay 
    grossPay = hourlyRate * hoursWorked;

    // calc the tax 
    heldTax = calculateTax(grossPay);

    // calc net pay
    netPay = grossPay - heldTax;

    // output the results
    puts("********** Pay Summary **********");
    printf("\nGross Pay:\t$%.2f\n", grossPay);
    printf("Tax Amount:\t$%.2f\n", heldTax);
    printf("Net Pay:\t$%.2f\n", netPay);

    return 0;
}
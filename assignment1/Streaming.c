/*
    Author: Cory Mischiek
    Date: 2024-01-13
    Description: An application for a streaming service, the user will 
        chose from the list of plans w/ prices, if they make a valid choice 
        they will be offered an optional add-on and will be shown a purchase 
        summary at the end of the program. 
*/

#include <stdio.h>

int main() {
    // Declare our variables
    const float price_AD_SUPPORTED = 9.99;
    const float price_BASIC = 16.99;
    const float price_STANDARD = 24.99;
    const float price_ADDON = 7.99;
    
    float invalid_price = 0;
    float user_pays = 0;

    // 0 = false, 1 = true
    int bool_addOn = 0;

    // Output the Plans and prices to the user, formatting the price to 2 decimal places.
    puts("Welcome to the application. Please select one of the following plans by typing 1, 2 or 3:");
    printf("\n1) Ad Supported - $%.2f\n", price_AD_SUPPORTED);
    printf("2) Basic - $%.2f\n", price_BASIC);
    printf("3) Standard - $%.2f\n", price_STANDARD);

    // Get the user's choice (1-3)
    int user_choice = 0;
    puts("\nPlease enter a choice: ");
    scanf("%d", &user_choice);

    // Flush the buffer
    int ch;
    while ( ( ch = getchar() ) != '\n' && ch != EOF );

    // If valid choice (1-3) offer an add on to the user
    if (user_choice >= 1 && user_choice <= 3) {
        
        char addOnChoice = ' ';
        printf("Would you like an add-on to allow user's outside of your home to use the account?\nAdditional Cost: $%.2f\n", price_ADDON);
        puts("Type Y/N for (Y)es or (N)o:");
        scanf("%c", &addOnChoice);

        while ( ( ch = getchar() ) != '\n' && ch != EOF );  // buffer flush

        // if addOnChoice was Y/y - add the price to user's total.
        if (addOnChoice == 'Y' || addOnChoice == 'y') {
            user_pays += price_ADDON;
            // set our int to 1, indicating true
            bool_addOn = 1;
            puts("You've added an optional feature!");
        }
        // if add on choice was anything but (y)es, the add on price will not factor into users total price
    }

    // Output the purchase information based on the user's choices
    puts("\n******************** PURCHASE SUMMARY ********************");
    if (user_choice == 1) {
        user_pays += price_AD_SUPPORTED;
        puts("Plan Purchased - Ad Supported Streaming");
        printf("Cost of the plan - $%.2f\n", price_AD_SUPPORTED);

    } else if (user_choice == 2) {
        user_pays += price_BASIC;
        puts("Plan Purchased - Basic Streaming");
        printf("Cost of the plan - $%.2f\n", price_BASIC);

    } else if (user_choice == 3) {
        user_pays += price_STANDARD;
        puts("Plan Purchased - Standard Streaming");
        printf("Cost of the plan - $%.2f\n", price_STANDARD);

    } else { 
        user_pays += invalid_price;
        printf("Invalid choice! - Total Cost $%d\n", invalid_price);
    }

    if (bool_addOn == 1) {
        printf("Additional add-on price: $%.2f\n", price_ADDON);
        printf("Total Cost of purchase: $%.2f\n", user_pays);
    }

    // Thank the user
    puts("\nThank you for using our service! Goodbye...");

    // final return statement
    return 0;
}

/*
Test Cases ran: 
dont select a plan just hit enter
type a number thats not 1-3 
type a character 

plan 1 - y
plan 1 - n 
plan 1 - empty 
plan 1 - character 

plan 2 - y
plan 2 - n 
plan 2 - empty 
plan 2 - character 

plan 3 - y
plan 3 - n 
plan 3 - empty 
plan 3 - character 

*/
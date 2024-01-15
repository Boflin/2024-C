#include <stdio.h> //include "Test.h"  <=  non system library

int main() {
    // puts is similar to putf but without data. (put string)
    puts("Program that requests a number");

    // float variable to store our number
    float rate = 0.0;

    // ask for the value
    puts("Please enter a rate:");

    // retrieve the value from the user using %f (decimal placeholder) 
    scanf("%f", &rate);
    // & sign is the 'address of' operator
    // rate consumes 4 bytes of memory, visualized as address 3013-16
    // A MEMORY VALUE IS A HEX VALUE!

    // scanf reads in 4 bytes from the keyboard and drops it into memory 3013-3016

    // if you enter 55.5 at the keyboard you're really pressing '55.5\n' because you pressed ENTER/RETURN
    // it becomes part of the input

    //scanf looks for a float (because %f) so it takes the 55.5 part (float) and maps it into 'rate'
    // You need to clear the buffer after SCANF because \n is left in it 
    int ch;
    while ( ( ch = getchar() ) != '\n' && ch != EOF );  // buffer flush

    // print value of rate 
    printf("The new rate is %f\n\n", rate);

    // print out the pointer location of rate
    printf("The rate is stored at  %p\n\n", &rate);

    // get second value for rate

    // ask for the data 
    puts("Pleease enter a second rate:");

    //scanf to retrieve, while to flush
    scanf("%f", &rate);

    //int ch;     // we comment out the ch because we've already declared it above
    while ( ( ch = getchar() ) != '\n' && ch != EOF );
    
    // print the data
    printf("The seconds rate is %f\n\n", rate);

    // Exercise: Repeat for an int and char variable (Get the user to enter a character, and also an integer.)

    // Declar an int variable
    int integer = 0;

    // ask the user 
    puts("Please enter an integer number:");

    // modify scanf for the corresponding placeholder for int
    scanf("%d", &integer);

    // flush
    while ( ( ch = getchar() ) != '\n' && ch != EOF );

    // print the data
    printf("The integer value is %d\n\n", integer);

    // declar a char value
    char character = ' ';

    // ask the user
    puts("Please enter a single character: ");

    // retrieve the char from user
    scanf("%c", &character);

    // flush
    while ( ( ch = getchar() ) != '\n' && ch != EOF );

    // print the result
    printf("The character you entered was '%c'\n\n", character);

    return 0;
}

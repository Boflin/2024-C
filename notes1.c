/*
    This is the CourseWork from 2024-01-09 - Programming in C
    https://www.youtube.com/watch?v=XOaqwGiHjlE&ab_channel=DAndrewsNSCC
*/

/* 
    this is a block comment 
*/
// this is a line comment 

/*
    Hexadecimal Numbers are A-F and 0-9 

    ---DATA TYPES---
    void (null)

Non Decimal Numbers
    int => memory is 2 bytes.  2^16  =< 65536.
            bit 1 is reserved for sign 2^15
            -32768 to +32767
    long => 4 bytes -2.1B to + 2.1B 

String
    char

Decimal Numbers
    double
    float

Declaring in C, java, C++:
    int x; => dataType variableName;

    x = 5; => Instantiation (Initializing, Assign)

    float number;
    number = 55.5;

    float number2 = 66.7; // Always initialize + Instantiate variables 

    unsigned long longNumber = 2324455667;   // Only Positive Numbers

    char choice = 'Y'; // characters require single quotes 

    Escape Characters:
        \n      new line (Line Return)
        \r      carriage return (Microsoft line return)
        \f      form feed
        \t      tab
        \a      bell sound (alert)

        \?      question mark character
        \\      escape the escape. (to show the '\')
        \'      print single apostraphe
        \""     print double apostraphe

        ----------- PLACEHOLDERS ---------------
        %c      characters / letters    char
        %d      whole number            int, short
        %ld     whole numbers(large)    long
        %f      real numbers(decimal)   float, double
        %u                              unsigned short
        %lu                             unsigned long
        %s      "strings"(arrays)       character array

        puts("some text"); // put string no variables

-------- THERE ARE NO STRING DATA TYPES IN C!!! --------

*/

// ------- OUR FIRST C PROGRAM -------

// always start with the following include statement
#include <stdio.h>

// define the main code that will run (since it's int main it's expecting an integer value to be returned)
int main () {
    
    // declare and instantiate a Variable
    int numVariable = 12;
    numVariable = 15;

    // declare and instantiate a Constant
    const int a = 12;
    // a = 15;  // commented out, because this will throw an error. Constant's can NOT be changed.
    
    // Formatted print statement. We use placeholders to represent values of a specific type that we will present at that location in the string.
    printf("This is a string. The stored value is %d\n", numVariable);  
    // After the string, you will need to list each variable corresponding to each placeholder. So for every placeholder (%d), you need a variable (num). 

   // This is an example of printing out two variables. You can see you need the formatting for each and then the variable declared. Similar to formatted strings in Python.
    double doubleVariable = 55.5;
    printf("numVariable is %d, doubleVariable is %f\n", numVariable, doubleVariable);

    // last statement returning our integer of 0
    return 0;
}
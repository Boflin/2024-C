












    // You need to clear the buffer after SCANF
    int ch;
    while ( ( ch = getchar() ) != '\n' && ch != E0F );

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
    while ( ( ch = getchar() ) != '\n' && ch != E0F );
    
    // print the data
    printf("The seconds rate is %f\n\n", rate);

    // Exercise: Repeat for an int and char variable (Get the user to enter a character, and also an integer.)

    // Declar an int variable

    // ask the user 

    // modify scanf for the corresponding placeholder for int

    // flush

    // print the data



    return 0;
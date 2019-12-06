//Assignment 3
//
//Prompt the user to input their first and last name and then print them a welcome message. Try storing the input as a char variable's value.
//
//Easy Mode: Allocate an arbitrary amount of indices to your char array and pray to the gods that the user input fits.
//
//Extra Credit: Dynamically allocate the array size of your char variable based on the length of the user's input.

#include <stdio.h>
#include <stdlib.h>

int main() {

    char name[20]; 
    printf("Enter your first Name: ");
    scanf("%s", &name);
    
    char surname[20];
    printf("Enter your last Name: ");
    scanf("%s", &surname);

    printf("Hello %s %s\n", name, surname);



    return 0;
}
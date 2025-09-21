#include <stdio.h>
#include <stdbool.h>
#include "contact.h"

void closeProgram(bool *shouldClose) {
    *shouldClose = true;
}

void chooseOption(int option, int contactCount, bool shouldClose) {
    switch (option)
    {
        case 5:
            closeProgram(&shouldClose);
            break;
        
        default:
            break;
    }
}

void println(char line[]) { // Could create a utils.h file to move this
    printf("%s\n", line);
}

void printMenu() {
        println("Please select an operation:\n");
        println("1: List Contacts");
        println("2: Add Contact");
        println("3: Edit Contact");
        println("4: Remove Contact");
        println("5: Close Program");
}

int main() {

    // Global variables

    int contactCount = 0;
    bool shouldClose = true;

    contact_t contactsArray[10];
    
    // Initial message

    println("Welcome to C Contact Manager!\n");
    
    // Main loop

    do {
        int option;

    } while(!shouldClose);

    return 0;
}


#include <stdio.h>
#pragma warning(disable : 4996)
#include <stdio.h>
#include "ValidateID.h"

/**
 * @brief ID validation
 * Write a function which receives an Israeli ID number (9 digits) as an integral value, and
 * determines whether it is a valid ID number. The function should return true if it is valid, and
 * false otherwise.
 * Test your code by calling the function from your main function using your own ID or the
 * following valid ID and invalid ID:
 * Valid ID: 123456782
 * Invalid ID: 876543210
 */


int main(void)
{


    unsigned int id;
    printf("Enter an ID number: ");
    scanf("%u", &id);

    printf(ValidateID(id) ? "ID is valid\n" : "ID is invalid\n");

    return 0;
}


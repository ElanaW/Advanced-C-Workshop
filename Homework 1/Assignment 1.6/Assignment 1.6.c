
#include <stdio.h>
#pragma warning(disable : 4996)
#include "FixID.h"
#include <stdio.h>

/**
 * @brief Fix ID
 * Write a program that receives an 8-digit ID number (without the check digit) as an integer
 * number and returns the right check digit. You may use functions from the ID validation exercise.
 */
int main(void)
{
    unsigned int id;
    printf("Enter an ID number: ");
    scanf("%u", &id);

    printf("%d\n", FixID(id));

    return 0;
}


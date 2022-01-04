#include <stdio.h>
#include "FixID.h"

int FixID(const unsigned int id)
{
    // check if ID invalid
    if (id > MAXIMUM_ID_NUMBER)
    {
        return -1;
    }
    int sum = 0;
    int remainingId = id;
    // Extract the last digit from the ID number until the ID number is empty
    for (int i = 0; remainingId; i++)
    {
        // Get the last digit
        int lastDigit = remainingId % 10;
        // Remove the last digit
        remainingId /= 10;
        // Double the last digit if the index is even
        if (i % 2 == 0)
        {
            lastDigit *= 2;
            // if it goes above 9, then subtract 9 from the number
            if (lastDigit > 9)
            {
                lastDigit -= 9;
            }
        }
        // add last digit to sum
        sum += lastDigit;
    }
    // return the digit that would make the sum divisible by 10
    return (10 - (sum % 10)) % 10;

    // alternative way using ternary:
    // return sum % 10 == 0 ? 0 : (10 - (sum % 10));
}

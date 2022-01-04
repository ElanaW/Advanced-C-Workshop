#include <stdio.h>
#include "ValidateID.h"




BOOL ValidateID(const unsigned int id)
{
    if (id > MAXIMUM_ID_NUMBER)
    {
        return false;
    }
    int sum = 0;
    int remainingId = id;
    // Extract the last digit from the ID number until the ID number is empty
    for (int i = 1; remainingId; i++)
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
    // return whether or num sum is divisible by 10
    return sum % 10 == 0;

}

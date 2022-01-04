#include <stdio.h>
#include "ReverseNumbers.h"

void ReverseNumbers()
{
    int number;
    // read a number
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number == 0)
    {
        return;
    }

    ReverseNumbers();

    // print the number
    printf("%d\n", number);
}

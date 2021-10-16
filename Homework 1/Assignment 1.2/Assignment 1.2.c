// Assignment 1.2.c : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>


int main()
{
     char letter;

     printf("Please enter a letter\n");
     scanf_s(" %c", &letter, 1);
     while (!(letter == 'q' || letter == 'Q'))
     {
         printf("%c \n", toupper(letter));
         scanf_s(" %c", &letter, 1);
     }

}

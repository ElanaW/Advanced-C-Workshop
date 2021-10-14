// Assignment 1.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>

int main()
{
    char letter;

    do
    {
      printf("Please enter a letter\n");
      scanf_s(" %c", &letter);
    } while (!(letter == 'q' || letter == 'Q'));

}

// Assigment 1.4.c : This file contains the 'main' function, 
//and functions to print the top middle and bottom of a diamond. 
//Program execution begins and ends in the 'main' function.
//Elana Weiss, 341390961

#include <stdio.h>
#include "Diamond.h"

int main()
{
	int input;

	printf_s("Please enter an odd number\n");
	scanf_s("%d", &input);

	//calling function to print top of diamond
	PrintTop(input);

	//calling function to print middle row
	PrintMiddle(input);

	//calling function to print bottom of diamond
	PrintBottom(input);

}
// Assignment 1.3.c : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include "Length.h"



int main()
{
	char word[50];
	printf("Please enter a word\n");
	scanf_s(" %c", &word);
	printf_s("The length of the word is %d", WordLength(word));

}
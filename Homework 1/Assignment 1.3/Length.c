#include "Length.h"

int WordLength(const char *word)
{
	int counter = 0;

	while (*(word++)!='\0')
	{
		counter++;
	}

	return counter;
}
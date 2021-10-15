#include "Length.h"

int WordLength(char* word)
{
	int counter = 0,index=0;
	while (word[index++]!='\0')
	{
		counter++;
	}

	return counter;
}
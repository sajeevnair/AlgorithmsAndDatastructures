#include "Header.h"
#include <string.h>
#define RANGE  100
void countSort(char *str)
{
	// The output character array that will have sorted str
	char output[sizeof(str)/sizeof(char)];

	// Create a count array to store count of inidividul characters and
	// initialize count array as 0
	int count[100], i;
	memset(count, 0, sizeof(count));

	// Store count of each character
	for (i = 0; str[i]; ++i)
		++count[str[i]];

	// Change count[i] so that count[i] now contains actual position of
	// this character in output array
	for (i = 1; i <= RANGE; ++i)
		count[i] += count[i - 1];

	// Build the output character array
	for (i = 0; str[i]; ++i)
	{
		output[count[str[i]] - 1] = str[i];
		--count[str[i]];
	}

	// Copy the output array to str, so that str now
	// contains sorted characters
	for (i = 0; str[i]; ++i)
		str[i] = output[i];
}
/*
OVERVIEW: Given a string, reverse all the words not the string.

E.g.: Input: "i like coding". Output: "coding like i"

INPUTS: A string.

OUTPUT: Modify the string according to the logic.

NOTES: Don't create new string.
*/
#include <Stdio.h>
#include <string.h>

void str_words_in_rev(char *input, int len)
{
	int i, j, k, found = 0; char c;
	/*if (input == NULL || len < 0)
		return '\0';*/
	for (i = 0; i <= len; i++)
	{
		if (input[i] == ' ' || input[i] == '\0')
		{
			for (j = i - 1, k = found; j >(i - 1 + found) / 2; j--, k++)    //reversing words individually in main string
			{
				c = input[j];
				input[j] = input[k];
				input[k] = c;
			}
			found = i + 1;
		}
	}

	for (i = len - 1, j = 0; i >= len / 2; i--, j++)    //reversing entire string
	{
		c = input[i];
		input[i] = input[j];
		input[j] = c;
	}
	input[len] = '\0';
}


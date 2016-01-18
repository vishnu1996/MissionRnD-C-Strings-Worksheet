/*
OVERVIEW: Given two strings, find the words that are common to both the strings.
E.g.: Input: "one two three", "two three five".  Output: "two", "three".

INPUTS: Two strings.

OUTPUT: common words in two given strings, return 2D array of strings.

ERROR CASES: Return NULL for invalid inputs.

NOTES: If there are no common words return NULL.
*/

#include <stdio.h>
#include <malloc.h>

#define SIZE 31

char ** commonWords(char *str1, char *str2)
{
	int i = 0, j = 0, k, found, x = 0, y=0,p;
	char** s;
	s = (char**)malloc(SIZE * sizeof(char*));
	
	if (str1 == NULL || str2 == NULL)
		return NULL;
	for (i; str1[i] != '\0'; i++)
	{
		found = 0;
		if (str1[i - 1] == ' ' || i == 0)
		{
			for (j, k = i; str2[j] != '\0' || str1[k] != '\0'; j++, k++)
			{
				if (str1[k] == str2[j])
				{
					if ((str1[k + 1] == ' ' || str1[k + 1] == '\0') && (str2[j + 1] == ' ' || str2[j + 1] == '\0'))
					{
						found = 1;
						break;
					}
				}

				if (str2[j] == ' ')
					k = i - 1;
			}
			if (found == 1)
			{
				s[x] = (char*)malloc(SIZE * sizeof(char));
				for (y = 0, p = i; p <= j; y++, p++)
					s[x][y] = str1[p];
				s[x][y] = '\0';
				x++;
			}
		}
	}
	return s;
}
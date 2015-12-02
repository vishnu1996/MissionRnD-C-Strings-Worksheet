/*
OVERVIEW: Given a string, return the Kth index from the end of the string.
E.g.: Input: "qwertyui", 3. Output: 't' (index starting from zero).

INPUTS: A string and value of K.

OUTPUT: Return the Kth index from the end of the string (index starting from zero).

ERROR CASES: Return '\0' for invalid inputs.

NOTES:
*/
int stringlength(char **str);

char KthIndexFromEnd(char *str, int K) 
{
	int i;
	if (str == nullptr || stringlength(&str) < K)
		return '\0';
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i + K] == '\0')
			return str[i + K];
	}
}
int stringlength(char **str)
{
	int i;
	for (i = 0; str[i] != '\0'; i++) ;
	return i;
}
/*
OVERVIEW: Given a float number ,Convert it into a string 

INPUTS: A Float,Final string ,How many digits after decimal has to be displayed .
Its zero for integers.


OUTPUT: No need to output anything ,Modify the str in function parameter such that it
now holds the string format of the float number specified

Example : number_to_str(345,str,0);
Should copy "345\0" in the str;
number_to_str(345.342,str,2);
Should copy "345.34" in the str;

NOTES: Don't create new string.

*/

#include <stdio.h>

void number_to_str(float number, char *str, int afterdecimal)
{
	int i, j, no, len, found = 0; char c;
	for (i = 0; i < afterdecimal; i++)
		number = number * 10;
	no = (int)number;
	/*for (i = 0; number - (int)number != 0; i++)
	number = number * 10;
	no = (int)(number / pow(10, (i - afterdecimal)));*/
	if (no < 0)
	{	no = -1 * no;		found = 1;  	}

	for (j = 0; j != afterdecimal; j++)
	{
		str[j] = (no % 10) + 48;
		no = no / 10;
	}

	str[j] = '.';

	for (j++; no > 0; j++)
	{
		str[j] = (no % 10) + 48;
		no = no / 10;
	}
	if (found == 1)
	{	str[j] = '-';		j++;	}
	str[j] = '\0';
	len = j - 1;
	for (i = len, j = 0; i > len / 2; i--, j++)    //reversing string
	{
		c = str[i];
		str[i] = str[j];
		str[j] = c;
	}
	return;
}

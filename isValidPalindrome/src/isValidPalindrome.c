#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include "isValidPalindrome.h"

bool isValidPalindrome(char *str)
{
	int first = 0;
	int last = strlen(str);

	while(first < last)
	{
		while( !isalnum( *(str + first) ) )
			first++;	
		while( !isalnum( *(str + last) ) )
			last--;

		if( tolower( *(str + first) ) != tolower( *(str + last) ) )
			return false;

		first++;
		last--;
	}
	return true;
}


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "isValidPalindrome.h"

int main(void)
{
	char *str = NULL;
	size_t len = 0;

	fprintf(stdout, "\nEnetr string: ");
	ssize_t chars = getline(&str, &len, stdin);

	if((str)[chars - 1] == '\n')
	{
		(str)[chars - 1] = '\0';
		--chars;
	}

	fprintf(stdout, "\nisValidPalindrome(%s) = %s\n\n", str, isValidPalindrome(str) ? "true" : "false");

	return 0;
}

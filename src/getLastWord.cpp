/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>

char * get_last_word(char * str){
	int spacecount = 0, len = 0, i, flen, slen;
	char *str1;
	str1 = (char*)malloc(sizeof(char)* 100);
	if (str == NULL)
		return NULL;
	while (str[len] != '\0'){
		/*if (str[len] == ' ')
			spacecount++;*/
		len++;
	}
	/*if (spacecount == len)
		return NULL;*/
	while (str[len - 1] == ' ')
	{
		len--;
	}
	flen = len - 1;
	while (str[len - 1] != ' ' && len >= 1)
	{
		len--;
	}
	slen = len;
	for (i = 0; slen <= flen; i++)
	{
		str1[i] = str[slen];
		slen++;
	}
	str1[i] = '\0';
	return str1;
}

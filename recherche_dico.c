#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include "liste_dico.h"

bool dicho (char** words, char* word, unsigned int debut,unsigned int fin)
{
	unsigned int mid = (debut + fin)/2;
	if(strcmp(words[mid],words[debut]) == 0)
	{
		return true;
	}
	while(debut != mid )
	{
		if(strcmp(words[mid],word) == 0)
		{
			return true;
		}
		else if (strcmp(words[mid],word) < 0)
		{
			return dicho( words, word, mid, fin);
		}
		else
		{
			return dicho(words, word, debut, mid);
		}
	}
	return false;
}
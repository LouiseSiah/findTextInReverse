#include "findTextInReverse.h"
#include <stdio.h>

/**
 * Find the last (partial) word in the text in Reverse 
 * and return the position of the first letter. 
 * Eg.,
 *  text = Alladidin
 *  word = di
 *  The return value is 6
 * 
 * Input:
 *  text		contains a bunch of words
 * 	wordToFind	is the (partial) word to find in the text
 * Return:
 *  the position of the first letter  found in text
 *  If the word cannot be found in the text, -2 is returned.
 */

int findTextInReverse (char *text, char *wordToFind )
{
  signed int i = 0 , 
             j = 0 , 
             k = 0 ;
  
  while( *(text + i) != 0)
  {
    i++;
  }
  
  while( *(wordToFind + j) != 0)
  {
    j++;
  }
  
  i--;
  j--;
  
  while (i > -1)
  {
	k = 0;
	
	while( *(text + (i - k)) == *(wordToFind + (j - k)) )
	{
		if( (j - k) == 0 )
			return (i - k);
		k++;
	}
	i--;
	
  }
  
  return -2;
}
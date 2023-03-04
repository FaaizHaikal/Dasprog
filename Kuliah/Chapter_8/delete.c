#include "delete.h"

/*
 * Returns source after deleting n characters beginning with source[index].
 * If source is too short for full deletion, as many characters are
 * deleted as possible.
 * Pre: All parameters are defined and
 * strlen(source) - index - n < MAX_LEN
 * Post: source is modified and returned
 */
char *
deletex(char *source,    /* input/output - string from which to delete part */
       int index,       /* input - index of first char to delete */
       int n)           /* input - number of chars to delete */
{
    char rest_str[MAX_LEN]; /* copy of source substring following characters to delete */

    /* If there are no characters in source following portion to
     * delete, delete rest of string */
    if (strlen(source) <= index + n) 
    {
    source[index] = '\0';
    
    }
    /* Otherwise, copy the portion following the portion to delete 
     * and place it in source beginning at the index position */
    else 
    {
        strcpy(rest_str, &source[index + n]);
        strcpy(&source[index], rest_str);
    }

    return (source);
}
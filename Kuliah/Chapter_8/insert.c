#include "insert.h"

/*
 * Returns source after inserting to_insert at position index of
 * source. If source[index] doesn't exist, adds to_insert at end of
 * source.
 * Pre: all parameters are defined, space available for source is
 * enough to accommodate insertion, and
 * strlen(source) - index - n < MAX_LEN
 * Post: source is modified and returned
 */
char *
insert(char *source,            /* input/output - target of insertion */
       const char *to_insert,   /* input - string to insert */
       int index)               /* input - position where to_insert is to be inserted */
{
    char rest_str[MAX_LEN]; /* copy of rest of source beginning with source[index] */
    if(strlen(source) <= index) 
        strcat(source, to_insert);
    else 
    {
        strcpy(rest_str, &source[index]);
        strcpy(&source[index], to_insert);
        strcat(source, rest_str);
    }
    return (source);
}

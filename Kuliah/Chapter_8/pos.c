#include "pos.h"
/*
 * Returns index of first occurrence of to_find in source or
 * value of NOT_FOUND if to_find is not in source.
 * Pre: both parameters are defined
 */
int
pos(const char *source, /* input - string in which to look for to_find */
    const char *to_find) /* input - string to find */
{
    int i = 0, find_len, found = 0, position;
    char substring[MAX_LEN];

    find_len = strlen(to_find);
    while (!found && i <= strlen(source) - find_len) 
    {
        strncpy(substring, &source[i], find_len);
        substring[find_len] = '\0';

        if (strcmp(substring, to_find) == 0)
            found = 1;
        else
            ++i;
    }
    if (found)
        position = i;
    else
        position = NOT_FOUND;
    return (position);
}

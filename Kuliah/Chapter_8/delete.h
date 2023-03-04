#ifndef __DELETE_H_
#define __DELETE_H_



#define MAX_LEN 100
#define NOT_FOUND -1

char *deletex(char *source,    /* input/output - string from which to delete part */ 
       int index,       /* input - index of first char to delete */
       int n);           /* input - number of chars to delete */

#endif
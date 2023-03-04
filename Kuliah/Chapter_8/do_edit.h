#ifndef __DO_EDIT_H_
#define __DO_EDIT_H_


#define MAX_LEN 100
#define NOT_FOUND -1

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "pos.c"
#include "insert.c"
#include "delete.c"


char *do_edit(char *source, char command);
#endif
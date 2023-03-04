#ifndef __FUNCTIONS_H_
#define __FUNCTIONS_H_

#define MAX_LEN 100
#define NOT_FOUND -1


char *do_edit(char *source, char command);
char *deletex(char *source, int index, int n);
char get_command(void);
char *insert(char *source, const char *to_insert, int index);
int pos(const char *source, const char *to_find);

#endif
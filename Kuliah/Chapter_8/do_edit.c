#include "do_edit.h"

char *
do_edit(char *source, /* input/output - string to modify or search */
        char command) /* input - character indicating operation */
{
    char str[MAX_LEN]; /* work string */
    int index;
    
    switch (command) 
    {
        case 'D':
            printf("String to delete> ");
            gets(str);
            index = pos(source, str);
            if (index == NOT_FOUND)
                printf("'%s' not found\n", str);
            else
                deletex(source, index, strlen(str));
            break;
        case 'I':
            printf("String to insert> ");
            gets(str);
            printf("Position of insertion> ");
            scanf("%d", &index);
            insert(source, str, index);
            break;
        case 'F':
            printf("String to find> ");
            gets(str);
            index = pos(source, str);
            if (index == NOT_FOUND)
                printf("'%s' not found\n", str);
            else
                printf("'%s' found at position %d\n", str, index);
            break;
        default:
            printf("Invalid edit command '%c'\n", command);
    }

    return (source);
}
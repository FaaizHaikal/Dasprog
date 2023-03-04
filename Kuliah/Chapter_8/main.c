#include "get_command.c"
#include "do_edit.c"

int main()
{
    char source[MAX_LEN], command;
    printf("Enter the source string:\n> ");
    gets(source);
    
    for (command = get_command();command != 'Q';command = get_command()) 
    {
        do_edit(source, command);
        printf("New source: %s\n\n", source);
    }

    printf("String after editing: %s\n", source);
    return (0);
}





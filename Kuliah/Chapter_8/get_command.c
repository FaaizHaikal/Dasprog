#include "get_command.h"
char
get_command(void)
{
    char command, ignore;

    printf("Enter D(Delete), I(Insert), F(Find), or Q(Quit)> ");
    scanf(" %c", &command);

    do
        ignore = getchar();
    while (ignore != '\n');

    return (toupper(command));
}
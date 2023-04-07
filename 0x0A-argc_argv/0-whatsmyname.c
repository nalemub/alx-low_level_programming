/**
 * a program that prints its name, followed by a new line.
 *
 *  @argc: the arguement count in int form
 *
 *  @argv: the arguement vector or array
 *
 *  Return int
 */

#include <stdio.h>

int main(int argc, char *argv[])
{
    int i = argc;
    printf("%s\n", argv[0]);
    return (0);
    i++;
}

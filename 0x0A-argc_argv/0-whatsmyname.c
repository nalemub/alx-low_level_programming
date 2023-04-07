#include <stdio.h>
#include"main.h"

/**
 * a program that prints its name, followed by a new line.
 *
 *  @argc: the arguement count in int form
 *
 *  @i: placeholder integer
 *  @argv: the arguement vector or array
 *
 *  Return int
 */

int main(int argc, char *argv[])
{
    int i = argc;
    printf("%s\n", argv[0]);
    i++;
    return (0);
}

#include<stdio.h>
/**
 * a program that prints its name, followed by a new line.
 *
 *  @argc: the arguement count in int form
 *
 *  @argv: the arguement vector or array
 *
 *  Return int
 */

int main(int argc, char *argv[])
{
    int i = 0;
    printf("%s\n", argv[0][i]);
    int something = argc;
    return (0);
}

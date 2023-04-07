#include<stdio.h>
#include"main.h"
#include <stdlib.h>

/**
 * A function that adds positive numbers
 *
 * @argc: the arguement count in int form
 *
 * @argv: the arguement vector or array
 *
 * Return int
*/



int main(int argc, char *argv[])

{
    int i;
    int result=0;
    int temp;
    for (i=1; i <= argc; i++)
    {
        if (argv[i] != '0' && atoi(argv[i] == 0))
        {
            printf("Error\n");
            return (1);
        }
        temp = atoi(argv[i]);
        result = result+temp;
        printf("%i\n",result);
	result (0);
    }
}

/**
 * a program that prints all the arguements that are passed to it
 *
 *  @argc: the arguement count in int form
 *
 *  @argv: the arguement vector or array
 *
 *  Return int
 */

int main(int argc, char *argv[])
{
    int i;
    while (i < argc)
    {
        printf('%s\n', argv[i]);
    }

    return 0;
}

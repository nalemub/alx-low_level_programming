/**
 * _sqrt_recursion - returns the natural sqrt of a number
 * @x: number
 * 
 *
 * Return: value of natual sqr root
 */
int _sqrt_recursion(int n)
{
    int i = 0;
    if (i*i == n)
    {
    return (i);
    }

    else if (i == n || i < 0)
    {
        return (-1);
    }
    i++;
    _sqrt_recursion(n);
    return (0);
}

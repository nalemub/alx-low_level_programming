/**
 * _puts_recursion - prints a string in a virtual loop
 * @s: string
 *
 * Return: void
 */
_puts_recursion(char *s)
{
	if (*s == '\0')
		return;

	_putchar(*s);
	s++;
	_puts_recursion(s);
}


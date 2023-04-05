
/**
 * the_true_function - Helper function to check if a number is prime
 * @n: The number to check
 * @factor: The current factor being checked
 *
 * Return: 1 if the number is prime, 0 otherwise
 */

int the_true_function(int n, int factor)
{
if (n % factor == 0 && factor > 1)
  {
  return (0);
  }
else if (factor == 1)
{
    return (1);
}

    factor--;
    return (the_true_function(n, factor));
}

/**
 * is_prime_number - Determines if a number is prime
 * @n: The number to check
 *
 * Return: 1 if the number is prime, 0 otherwise
 */
int is_prime_number(int n)
{
int m=n-1;
int answer = the_true_function(n, m);
return (answer);
}



/**
 * function to swap numbers, we are going to need a variable to work as memoryy
 *
 * one pointers value in a temporary number
 *
 * swap without losing any data
 */

void swap_int(int *a, int *b)
{
    int hold_number = *b;
    *b = *a;
    *a = hold_number;
}

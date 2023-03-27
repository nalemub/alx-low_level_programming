/**
 * function to swap numbers, we are going to need a variable to work as memoryy
 *
 */

void swap_int(int *a, int *b)
{
    int hold_number = *a;
    *b = *a;
    *a = hold_number;
}

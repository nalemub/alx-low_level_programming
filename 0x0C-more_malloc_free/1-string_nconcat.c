#include <stdlib.h> 
#include "main.h"

/**
 * a function that does stuff
 * 
 * @newmem: some pointer
 * 
 * @i: somevariable
 * @j: somevariable
 * @result: some result
 * 
 * return: void
*/

unsigned int string_length(char* str)
{
unsigned int length = 0;
while (*str != '\0')
{
length++;
str++;
}
return (length);
}

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i;
int j;
int buffer;
char* result;
if (s1 == NULL)
{
s1 = "";
}
if (s1 == NULL)
{
s1 = "";
}
buffer = string_length(s1)+string_length(s2)+1;
result = (char*) malloc(buffer);
for (i = 0; i < string_length(s1); i++)
{
result[j] = s1[i];
j++;
}
for (i = 0; i < string_length(s2); i++)
{
if (i == n)
{
result[j] = '\0';
return (result);   
}
result[j] = s2[i];
j++;
}
result[j] = '\0';
return (result);
}

#include"main.h"

/**
  *A function that looks for a character in an array
  *of strings
  *
  *@s is the souce character the function is operating
  *on
  *
  *@c is the character being looked for
  *
  *
  *
  *
  */
char *_strchr(char *s, char c)
{
  
  for (int i;s[i]!="\0" && i<sizeof(s);i++)
    {
      if (s[i]=c)
      {
        return (s[i]);
      }
    }

  return (NULL);
}

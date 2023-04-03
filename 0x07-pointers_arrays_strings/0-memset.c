#include"main.h"
/**
  *A function that fills all positions of an array      *with a constant value b
  *
  *@b is the constant byte to fill in the memory
  *location
  *
  *@s is the pointer to the target string
  *
  *@n is the number of memories that have to be
  *occupied
  */

char *_memset(char *s, char b, unsigned int n)

{
  for (int i=0;i<n;i++)
    {
      s[i]=b;
    }
  s[n] = "\0";
  return (s);
}

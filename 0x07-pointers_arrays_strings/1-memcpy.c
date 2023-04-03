#include"main.h"


/**a fuction that copies a specified number of bytes    *from one memory location and return it to another    *location
  *
  *@dest is the destination location
  *
  *@src is the source location
  *
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
  for(int i=0; i<n;i++)
    {
      dest[i]=src[i];
    }
  return (dest);
}

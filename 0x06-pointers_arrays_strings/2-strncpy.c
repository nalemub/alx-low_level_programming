/**
 * strncpy copies the contents of the second parameter into the first parameter
 *
 *
 * dest describes destination
 *
 * src is source
 *
 * n is the number of strings that has to be copied
 */

char *_strncpy(char *dest, char *src, int n)

{
	int i=0;
	for (i=0;src[i]!='\0' && i<n;i++)
	{
		dest[i]=src[i];
	}
	
	dest[i]='\0';
	
	return dest;

}

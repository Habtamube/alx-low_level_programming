#include <main.h>

/**
*_memset() function fills memory with constant byte
*@s: memory space to filled
*@b: byte to fill with
*@n: number of areas to fill
*
*Return memory space s
*/
char *_memset(char *s,char b,unsigned int n)
{
	unsigned int i;
	
        for(i=0;i<n;i++)
         {
           *(s+n)=b;
         }
        return(s);
}

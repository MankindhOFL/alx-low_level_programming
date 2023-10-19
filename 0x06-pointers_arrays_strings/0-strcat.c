#include "main.h"

/**
 * _strcat - this is the name of the function
 * @dest: this is the concatenation parameter
 * @src: this is the Concatenation parameter also
 */

char *_strcat(char *dest, char *src)
{
int k, r;
k = 0;
r = 0;
while (dest[k] != '\0')
{
k++;
}
while (src[r] != '\0')
{
dest[k] = src[r];
k++;
r++;
}
dest[k] = '\0';
return (dest);
}

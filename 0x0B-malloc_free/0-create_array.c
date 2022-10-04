#include "main.h"
/**
 *create_array - array for prints a string
 *@size: number elements array
 *@c: char
 *Return: pointer
 */

char *create_array(unsigned int size, char c)
{
char *array;
unsigned int position;

if (size == 0)
{
return (NULL);
}

/*Define values with malloc*/
array = (char *) malloc(size * sizeof(c));

if (array == 0)
{
return (NULL);
}

else
{
position = 0;
while (position < size) /*While for array*/
{
*(array + position) = c;
position++;
}

return (array);
}

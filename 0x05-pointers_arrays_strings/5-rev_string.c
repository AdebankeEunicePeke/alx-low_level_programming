#include "main.h"
#include <stdio.h>

/**
 * rev_string - Function print a string reverser
 * @s: this is the pointer that points to a string
 */
void rev_string(char *s)
{
int a, l;

char *begin, *end = s;

for (a = 0; s[a] != '\0' && s[a + 1] != '\0'; a++)
{
end++;
}
len = a + 1;
begin = s;
for (a = 0; a < len / 2; a++)
{
char x;
x = *end;
*end = *begin;
*begin = x;
end--;
}
end[len + 1] = '\0';
}

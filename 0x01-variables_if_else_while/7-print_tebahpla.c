#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char small;
for (small = 'z'; small >= 'a'; small--)
   {
       putchar(small);
   }
   
putchar('\n');
return (0);
}

#include <stdio.h>
/**
 * main - prints out sizes of data types in c.
 * code by Dimkpa_the_Great!
 * Return: 0
 */

int main(void)
{
char i;
int ii;
long int iii;
long long int iv;
float v;
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(i));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(ii));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(iii));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(iv));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(v));
return (0);
}

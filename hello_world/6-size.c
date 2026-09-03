#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
printf("Size of a char: %lu bytes(s)\n", (unsigned long)sizeof(char));
printf("Size of int: %lu bytes(s)\n", (unsigned long)sizeof(int));
printf("Size of long int: %lu bytes(s)\n", (unsigned long)sizeof(long int));
printf("Size of long long int: %lu bytes(s)\n", (unsigned long)sizeof(long long int));

return (0);
}

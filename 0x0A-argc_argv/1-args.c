#include <stdio.h>

/**
 * @main - prints its name, followed by a new line. 
 * 
 * @argc: The number of arguments present in the program
 * @argv: An array of pointer to the arguments
 * Return: int 0 on success
 */

int main (int __attribute__((__unused__)) argc, char *argv[])
{
    printf("%d\n", argc - 1);
    return (0);
}
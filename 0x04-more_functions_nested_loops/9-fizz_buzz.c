#include <stdio.h>

/**
* main - Prints the numbers from 1 to 100, followed by a new line
* Description: For multiples of three print Fizz instead of the number,
* For the multiples of five print Buzz
* For numbers which are multiples of both three and five print FizzBuzz
* Return 0 on success
*/

int main(void)
{
int i;

for (i = 1; i <= 100; i++)
{
if (i % 3 == 0)
	printf("Fizz");
if (i % 5 == 0)
	printf("Buzz");
if ((i % 3 != 0) && (i % 5 != 0))
	printf("%d", i);
}
return (0);
}
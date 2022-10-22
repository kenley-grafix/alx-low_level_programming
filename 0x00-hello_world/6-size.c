#include <stdio.h>
/*
 * main - main function calls other function execution
 *
 * return: Always 0
 */

int main(void)

{
printf("Size of a char: %ld byte(s)", sizeof(char));
printf("\nSize of an int: %ld byte(s)", sizeof(int));
printf("\nSize of a long int: %ld byte(s)", sizeof(long int));
printf("\nSize of a long long int: %ld byte(s)", sizeof(long long int));
printf("\nSize of a float: %ld byte(s)\n", sizeof(float));
return (0);
}

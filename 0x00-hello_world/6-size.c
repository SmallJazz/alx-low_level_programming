#include <stdio.h>
/**
 * main - A program that prints the size of various types on the computer it is compiled and run on
 * return: 0 (success)
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

printf("size of a char: %1u byte(s)\n", (unsinged long)sizeof(a));
printf("size of a int: %1u byte(s)\n", (unsinged long)sizeof(b));
printf("size of a long int: %1u byte(s)\n", (unsinged long)sizeof(c));
printf("size of a long long int: %1u byte(s)\n", (unsinged long)sizeof(d));
printf("size of a float: %1u byte(s)\n", (unsinged long)sizeof(e));
return (0);
}

#include <stdio.h>
#include <stdlib.h>

/**
 * before_main - function executes before the main funnction
 * Return: nothing;
 */
void __attribute__((constructor)) before_main()
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}

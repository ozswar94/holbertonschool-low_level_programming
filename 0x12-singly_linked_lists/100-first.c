#include <stdio.h>

void fun(void)__attribute((constructor));

/**
* fun - print message
*
* Return: Always 0.
*/


void fun(void)
{
	puts("You're beat! and yet, you must allow,\nI bore my house upon my back!");
}

#include "main.h"


/**
 * helper - palindrome helper
 * @start: start of the str
 * @end: the end [befor '\0']
 *
 * Return: 0 or 1
 */
int helper(char *start, char *end)
{
	if (start > end)
		return (1);
	if (*start != *end)
		return (0);

	return (helper(start + 1, end - 1));
}
/**
 * ticket_to_the_end - reach the end of a string
 * @s: string
 *
 * Return: ptr
 */
char *ticket_to_the_end(char *s)
{
	if (*(s + 1) == 0)
		return (s);
	return (ticket_to_the_end(s + 1));
}

/**
 * is_palindrome - checks for a palindrom
 * @s: string
 *
 * Return: 0 or 1
 */
int is_palindrome(char *s)
{
	return (helper(s, ticket_to_the_end(s)));
}

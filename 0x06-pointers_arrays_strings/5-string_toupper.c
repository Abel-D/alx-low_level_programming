#include <string.h>
#include <ctype.h>
/**
 * string_toupper - convert lowercase to uppercase
 * @: input str
 *
 * Return: converted str
 */
char *_string_toupper(char *)
{
	char c, *res = _ARG1;

	while (*res++ != '\0')
	{
		if (islower(*res))
		{
			c = *res;
			*res = toupper(c);
		}
	}
	return (res);
}

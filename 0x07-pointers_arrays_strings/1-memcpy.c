/**
 * _memcpy - copy char from src to dest
 * @src: source address
 * @dest: destination address
 * @n: no of bytes
 *
 * Return: pointer to destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{

	while (n > 0)
	{
		*dest++ = *src++;
		n--;
	}
	return (dest);
}

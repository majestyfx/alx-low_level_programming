#include <unistd.h>
/** _putchar - write the character c
 * @c: character to print
 * Return: 1 (success)
 * on error, -1 is returned, the error is  set appropriately
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}

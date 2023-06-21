#include "main.h"
/**
 * _isalpha  - print lower case or uppercase
 * @c: the character checked
 * Return: 1 lowercase or 0 others
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
return (0);
}

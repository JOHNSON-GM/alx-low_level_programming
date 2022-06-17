#include "main.h"

/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer for result
 * @size_r: buffer size
 *
 * Return: address of r or 0
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int x, y, k, l, m, n;

for (x = 0; n1[x]; x++)
for (y = 0; n2[y]; y++)

if (x > size_r || y > size_r)
return (0);
m = 0;
for (x -= 1, y -= 1, k = 0; k < size_r - 1; x--, y--, k++)
{
n = m;
if (x >= 0)
n += n1[x] - '0';
if (y >= 0)
n += n2[y] - '0';

if (x < 0 && j < 0 && n == 0)

{

break;

}

m = n / 10;

r[k] = n % 10 + '0';

}

r[k] = '\0';

if (x >= 0 || y >= 0 || m)

return (0);

for (k -= 1, l = 0; l < k; k--, l++)

{

m = r[k];

r[k] = r[l];

r[l] = m;

}

return (r);

}

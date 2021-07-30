#include <stdio.h>
#include <stdlib.h>

/**
 * display_complex_number - displays a complex number a + ib
 * @c: structure “complex”
 *
 * Return: void
 */

struct complex
{
  double re;
  double im;
};
typedef struct complex complex;

void display_complex_number(complex c)
{
    if (c.im > 0)
    {
      printf("%.0f + %.0fi\n", c.re, c.im);
    }
    else if (c.im == 0)
    {
      printf("%.0f\n", c.re);
    }
    else if (c.re == 0)
    {
      printf("%.0fi\n", c.im);
    }
}

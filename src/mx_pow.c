#include "../inc/libmx.h"

double mx_pow(double n, unsigned int pow)
{
  double p = 1;

  for(unsigned int i = 1; i <= pow; i++)
  {
     p = p * n;
  }
  return p;
}


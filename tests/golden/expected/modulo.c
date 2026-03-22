#include <stdbool.h>
#include <stdint.h>
#include "ngawi_runtime.h"

/* Generated from examples/modulo.ngawi */

int main(void);

int main(void)
{
  int64_t n = 10;
  int64_t r = (n % 3);
  ng_print_int(r);
  ng_print_string("\n");
  return 0;
}


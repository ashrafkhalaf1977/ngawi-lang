#include <stdbool.h>
#include <stdint.h>
#include "ngawi_runtime.h"

/* Generated from examples/compound_assign.ngawi */

int main(void);

int main(void)
{
  int64_t x = 10;
  x = (x + 5);
  x = (x - 3);
  x = (x * 2);
  x = (x / 4);
  x = (x % 3);
  ng_print_int(x);
  ng_print_string("\n");
  return 0;
}


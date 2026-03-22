#include <stdbool.h>
#include <stdint.h>
#include "ngawi_runtime.h"

/* Generated from examples/incdec.ngawi */

int main(void);

int main(void)
{
  int64_t i = 0;
  i = (i + 1);
  i = (i + 1);
  i = (i - 1);
  for (int64_t j = 0; (j < 3); j = (j + 1))
  {
    i = (i + j);
  }
  ng_print_int(i);
  ng_print_string("\n");
  return 0;
}


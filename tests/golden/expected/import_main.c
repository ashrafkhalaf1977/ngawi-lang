#include <stdbool.h>
#include <stdint.h>
#include "ngawi_runtime.h"

/* Generated from examples/import_main.ngawi */

int64_t add(int64_t a, int64_t b);
int main(void);

int64_t add(int64_t a, int64_t b)
{
  return (a + b);
}

int main(void)
{
  int64_t x = add(3, 4);
  ng_print_int(x);
  ng_print_string("\n");
  return 0;
}


#include <stdbool.h>
#include <stdint.h>
#include "ngawi_runtime.h"

/* Generated from examples/len.ngawi */

int main(void);

int main(void)
{
  const char * s = "ngawi";
  int64_t n = ng_string_len(s);
  ng_print_int(n);
  ng_print_string("\n");
  return 0;
}


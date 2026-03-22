#include <stdbool.h>
#include <stdint.h>
#include "ngawi_runtime.h"

/* Generated from examples/hello.ngawi */

int main(void);

int main(void)
{
  const char * msg = "Hello, Ngawi";
  ng_print_string(msg);
  ng_print_string("\n");
  return 0;
}


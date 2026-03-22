#include <stdbool.h>
#include <stdint.h>
#include "ngawi_runtime.h"

/* Generated from examples/if_else.ngawi */

int main(void);

int main(void)
{
  double score = 7;
  bool ok = (score > 5);
  if (ok)
  {
    ng_print_string("big");
    ng_print_string("\n");
  }
  else
  {
    ng_print_string("small");
    ng_print_string("\n");
  }
  return 0;
}


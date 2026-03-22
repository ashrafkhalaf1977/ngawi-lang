#include <stdbool.h>
#include <stdint.h>
#include "ngawi_runtime.h"

/* Generated from examples/match_string.ngawi */

int main(void);

int main(void)
{
  const char * s = "ngawi";
  const char *__ng_match_s_4_3 = s;
  if (ng_string_eq(__ng_match_s_4_3, "lang"))
  {
    ng_print_string("no");
    ng_print_string("\n");
  }
  else if (ng_string_eq(__ng_match_s_4_3, "ngawi"))
  {
    ng_print_string("yes");
    ng_print_string("\n");
  }
  else
  {
    ng_print_string("other");
    ng_print_string("\n");
  }
  return 0;
}


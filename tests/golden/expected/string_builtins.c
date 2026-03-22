#include <stdbool.h>
#include <stdint.h>
#include "ngawi_runtime.h"

/* Generated from examples/string_builtins.ngawi */

int main(void);

int main(void)
{
  const char * s = "NgawiLang";
  bool c = ng_string_contains(s, "Lang");
  bool p = ng_string_starts_with(s, "Nga");
  const char * low = ng_string_to_lower(s);
  ng_print_bool(c);
  ng_print_string(" ");
  ng_print_bool(p);
  ng_print_string(" ");
  ng_print_string(low);
  ng_print_string("\n");
  return 0;
}


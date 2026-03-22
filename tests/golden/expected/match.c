#include <stdbool.h>
#include <stdint.h>
#include "ngawi_runtime.h"

/* Generated from examples/match.ngawi */

int main(void);

int main(void)
{
  int64_t x = 2;
  switch (x)
  {
    case 0:
    {
      {
        ng_print_string("zero");
        ng_print_string("\n");
      }
      break;
    }
    case 1:
    {
      {
        ng_print_string("one");
        ng_print_string("\n");
      }
      break;
    }
    case 2:
    {
      {
        ng_print_string("two");
        ng_print_string("\n");
      }
      break;
    }
    default:
    {
      {
        ng_print_string("other");
        ng_print_string("\n");
      }
      break;
    }
  }
  return 0;
}


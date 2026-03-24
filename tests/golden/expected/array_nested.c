#include <stdbool.h>
#include <stdint.h>
#include "ngawi_runtime.h"

/* Generated from examples/array_nested.ngawi */

int main(void);

int main(void)
{
  ng_int_array_t a = (ng_int_array_t){.data=(int64_t[]){1, 2}, .len=2};
  ng_int_array_t b = (ng_int_array_t){.data=(int64_t[]){3, 4, 5}, .len=3};
  ng_int2_array_t m = (ng_int2_array_t){.data=(ng_int_array_t[]){a, b}, .len=2};
  m = ng_int2_array_push(m, (ng_int_array_t){.data=(int64_t[]){7, 8}, .len=2});
  ng_int2_array_set(&m, (int64_t)(0), (ng_int_array_t){.data=(int64_t[]){9, 10}, .len=2});
  ng_int_array_t row = ng_int2_array_get(m, (int64_t)(0));
  int64_t x = ng_int_array_get(row, (int64_t)(1));
  int64_t y = ng_int_array_get(ng_int2_array_get(m, (int64_t)(1)), (int64_t)(2));
  ng_print_int(x);
  ng_print_string(" ");
  ng_print_int(y);
  ng_print_string(" ");
  ng_print_int(((m).len));
  ng_print_string("\n");
  return 0;
}


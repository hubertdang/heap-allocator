#include "heap.h"
#include <stdio.h>

void test_req_mem() {
  printf("Testing req_mem():\n");
  size_t lil_size = 1;
  req_mem(lil_size);
}

void test_rel_mem() {
  printf("Testing rel_mem():\n");
  int *int_ptr;
  rel_mem(int_ptr);
}

int main() {
  test_req_mem();
  test_rel_mem();
  return 0;
}

#include "mem.h"
#include <stdio.h>

void *req_mem(size_t size) {
	printf("In function req_mem()\n");
}

void *rel_mem(void *mem_block) {
	printf("In function rel_mem()\n");
}

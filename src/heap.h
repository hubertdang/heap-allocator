#ifndef HEAP_H
#define HEAP_H

#include <stddef.h>

void *req_mem(size_t size);
void rel_mem(void *mem_block);

#endif // HEAP_H

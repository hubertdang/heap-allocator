#ifndef HEAP_H
#define HEAP_H

#include <stddef.h>

void heap_init();
void heap_clean();
void *req_mem(size_t size);
void rel_mem(void *mem_block);

#endif // HEAP_H

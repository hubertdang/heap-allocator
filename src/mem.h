#ifndef MEM_H
#define MEM_H

#include <stddef.h>

void *req_mem(size_t size);
void *rel_mem(void *mem_block);

#endif // MEM_H

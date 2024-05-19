#include "heap.h"
#include <stdlib.h>
#include <stdio.h>
#include <sys/mman.h>

/*******************************************************************************
 * This function requests for memory allocation
 *
 * @param size is the size of the memory block requested in bytes
 *
 * @return	- pointer to the memory block allocated
 *
 ******************************************************************************/
void *req_mem(size_t size)
{ /* use mmap */
}

/*******************************************************************************
 * This function releases a block of memory allocated by req_mem()
 *
 * @param mem_block is the memory block to release
 *
 * @return	None
 *
 ******************************************************************************/
void rel_mem(void *mem_block)
{ /* use munmap */
}

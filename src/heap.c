#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/mman.h>
#include <stdint.h>
#include "heap.h"

/* DEFINES */
#define BLOCK_SIZE 4096
#define NUM_BLOCKS 10
#define HEAP_MAX_SIZE sizeof(block_t) * NUM_BLOCKS

/* TYPEDEFS */
typedef struct block block_t;

struct block {
	uint8_t data[BLOCK_SIZE];
	uint8_t free;
	block_t *next;
};

typedef struct {
	block_t *start;
	/* more meta data here if needed */
} heap_t;

/* GLOBALS */
static heap_t g_heap;
static uint8_t heap_inited = 0;

/* FUNCTIONS */

/*******************************************************************************
 * This function initializes the heap
 *
 * @param[out] pointer to the initialized heap
 *
 * @return	None
 *
 ******************************************************************************/
void heap_init()
{
	g_heap.start = mmap(NULL, HEAP_MAX_SIZE, PROT_READ | PROT_WRITE,
			    MAP_PRIVATE | MAP_ANONYMOUS, -1, 0);
	if (g_heap.start == MAP_FAILED) {
		perror("mmap failed");
		exit(EXIT_FAILURE);
	}

	block_t *curr = g_heap.start;
	for (uint8_t blk_num = 0; blk_num < NUM_BLOCKS; blk_num++) {
		curr->free = 1;
		/* track last block to set its 'next' to NULL */
		curr->next = (blk_num == (NUM_BLOCKS - 1)) ? NULL : curr + 1;
		curr++;
	}
}

/*******************************************************************************
 * This function cleans up the heap
 *
 * @return	None
 *
 ******************************************************************************/
void heap_clean()
{
	if (!heap_inited) {
		perror("heap not initialized yet");
		exit(EXIT_FAILURE);
	}
}

/*******************************************************************************
 * This function requests for memory allocation
 *
 * @param[in] size is the size of the memory block requested in bytes
 *
 * @return	- pointer to the memory block allocated
 *
 ******************************************************************************/
void *req_mem(size_t size)
{
	if (!heap_inited) {
		perror("heap not initialized yet");
		exit(EXIT_FAILURE);
	}
}

/*******************************************************************************
 * This function releases a block of memory allocated by req_mem()
 *
 * @param[in] mem_block is the memory block to release
 *
 * @return	None
 *
 ******************************************************************************/
void rel_mem(void *mem_block)
{
	if (!heap_inited) {
		perror("heap not initialized yet");
		exit(EXIT_FAILURE);
	}
}

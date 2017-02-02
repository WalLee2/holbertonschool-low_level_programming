#include "hash_tables.h"
/**
 *
 *
 *
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int idx, hash_val;

	hash_val = hash_djb2(key);
	idx = hash_val % size;
	return (idx);
}

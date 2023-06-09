nclude "hash_tables.h"

/**
 * hash_djb2 - Hash function implementing the djb2 algorithm.
 * @s: The string to hash.
 *
 * Return: The calculated hash.
 */
unsigned long int hash_djb2(const unsigned char *s)
{
	unsigned long int hash;
	int j;

	hash = 5381;
	while ((j = *s++))
		hash = ((hash << 5) + hash) + j;

	return (hash);
}

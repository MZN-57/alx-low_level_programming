#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - helps in freeing memory
 *
 * @d: free the dog's struct
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

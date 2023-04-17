#include <stdlib.h>
#include "dog.h"

/**
 * str_length - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int str_length(char *s)
{
	int count;

	count = 0;
	while (s[count] != '\0')
	{
		count++;
	}
	return (count);
}

/**
 * str_copy - copies the string pointed to by source
 * including the terminating null byte (\0)
 * to the buffer pointed to by destination
 * @destination: pointer to the buffer in which we copy the string
 * @source: string to be copied
 *
 * Return: the pointer to destination
 */
char *str_copy(char *destination, char *source)
{
	int length, idx;

	length = 0;
	while (source[length] != '\0')
	{
		length++;
	}
	for (idx = 0; idx <= length; idx++)
	{
		destination[idx] = source[idx];
	}
	return (destination);
}

/**
 * create_dog - creates a new dog
 * @dog_name: name of the dog
 * @dog_age: age of the dog
 * @dog_owner: owner of the dog
 *
 * Return: pointer to the new dog (Success), NULL otherwise
 */
dog_t *create_dog(char *dog_name, float dog_age, char *dog_owner)
{
	dog_t *dog_instance;
	int name_length, owner_length;

	name_length = str_length(dog_name);
	owner_length = str_length(dog_owner);

	dog_instance = malloc(sizeof(dog_t));
	if (dog_instance == NULL)
		return (NULL);

	dog_instance->name = malloc(sizeof(char) * (name_length + 1));
	if (dog_instance->name == NULL)
	{
		free(dog_instance);
		return (NULL);
	}

	dog_instance->owner = malloc(sizeof(char) * (owner_length + 1));
	if (dog_instance->owner == NULL)
	{
		free(dog_instance->name);
		free(dog_instance);
		return (NULL);
	}

	str_copy(dog_instance->name, dog_name);
	str_copy(dog_instance->owner, dog_owner);
	dog_instance->age = dog_age;

	return (dog_instance);
}

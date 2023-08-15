#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 *
 * Return: struct dog.
 * if fails, returns NULL.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogp;
	int i, lname, lowner;

	dogp = malloc(sizeof(*dogp));
	if (dogp == NULL || !(name) || !(owner))
	{
		free(dogp);
		return (NULL);
	}

	for (lname = 0; name[lname]; lname++)
		;

	for (lowner = 0; owner[lowner]; lowner++)
		;

	dogp->name = malloc(lname + 1);
	dogp->owner = malloc(lowner + 1);

	if (!(dogp->name) || !(dogp->owner))
	{
		free(dogp->owner);
		free(dogp->name);
		free(dogp);
		return (NULL);
	}

	for (i = 0; i < lname; i++)
		dogp->name[i] = name[i];
	dogp->name[i] = '\0';

	dogp->age = age;

	for (i = 0; i < lowner; i++)
		dogp->owner[i] = owner[i];
	dogp->owner[i] = '\0';

	return (dogp);
}

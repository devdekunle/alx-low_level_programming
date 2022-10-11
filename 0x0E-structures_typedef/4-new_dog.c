#include "dog.h"
#include <stdlib.h>
#include "2-strlen.c"
#include "9-strcpy.c"
/**
*new_dog - new struct to create
*@name: name
*@age: age
*@owner: owner
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_pup;
	int lenName, lenOwner;
	if (name != NULL && owner != NULL)
	{

		lenName = _strlen(name) + 1;
		lenOwner = _strlen(owner) + 1;
		new_pup = malloc(sizeof(dog_t));
		if (dog_t == NULL)
			return (NULL);
		new_pup->name = malloc(lenName * sizeof(char));
		if (new_dog->name == NULL)
		{	free(new_dog->name);
			return (NULL);
		}
		new_pup->name = _strcpy(new_pup->name, name);
		new_pup->owner = malloc (lenOwner * sizeof(char));
		if (new_pup->owner == NULL)
		{
			free(new_pup);
			free(new_pup->owner);
			return (NULL);
		}
		new_pup->owner = _strcpy(new_pup->owner, owner);
		new_pup->age = age;
		return  (new_pup);
	}

}

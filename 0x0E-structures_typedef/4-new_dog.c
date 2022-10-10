#include "dog.h"

int strlen(char *str);
char *strcpy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * strlen - find string length
 *
 * @str: string
 *
 * Return: len
 */

int strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}

/**
 * strcpy - copy string
 *
 * @dest: copy to
 * @src: source
 *
 * Return: dest
 */

char *strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}


/**
 * new_dog - function to new dog
 *
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: success or null if failed
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *mydog;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);
	mydog = malloc(sizeof(dog_t)
	if (mydog == NULL)
		return (NULL);

	mydog->name = malloc(sizeof(char) * (strlen(name) + 1));

	if (mydog->name == NULL)
	{
		free(mydog);
		return (NULL);
	}

	mydog->owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (mydog->owner == NULL)
	{
		free(mydog->name);
		free(mydog->owner);
		return (NULL);
	}

	mydog->name = strcpy(mydog->name, name);
	mydog->age = age;
	mydog->owner = strcpy(mydog->owner, owner);

	return (mydog);
}

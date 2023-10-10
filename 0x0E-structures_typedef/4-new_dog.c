#include <stdlib.h>
#include <string.h>
/**
 * new_dog - creates a new dog
 * @name: name of doge
 * @age: age of doge
 * @owner: does anyone ever really own a doge?
 *
 * Return: Pointer to new dog
 */
typedef struct dog dog_t;
struct dog
{
	char *name;
	float age;
	char *owner;
};
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}
	dog->name = strdup(name);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return NULL;
	}
	dog->age = age;
	return (dog);
}

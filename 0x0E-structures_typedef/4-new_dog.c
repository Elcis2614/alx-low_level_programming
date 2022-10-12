#include "dog.h"
/**
 * new_dog - creates a dog_t object
 * @name: the name value
 * @age: the age field
 * @owner: the owner field
 * Return: returns a dog_t object
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = name;
	dog->owner = owner;
	dog->age = age;
	return (dog);
}

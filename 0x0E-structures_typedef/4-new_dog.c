#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

dog_t *new_dog(char *name, float age, char *owner);
int _strlen(char *fa);
char *_strcpy(char *dest, char *str);
/**
 * new_dog - function to create a new dog
 *
 * @name: name element
 * @age: age element
 * @owner: owner element
 *
 * Return: to the function
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int i;
	int j;

	i = _strlen(name);
	j = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (i + 1));
	if (dog->name == NULL)
		return (NULL);
	dog->owner = malloc(sizeof(char) * (j + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;
	return (dog);
}
/**
 * _strlen - dunction to measure lenght of a string
 *
 * @fa: string to be measured
 *
 * Return: to the measured string
 */
int _strlen(char *fa)
{
	int j = 0;

	while (*fa++)
		j++;
	return (j);
}
/**
 * _strcpy - function that copies a string
 *
 * @dest: pointer to first string
 * @str: pointer to second string
 *
 * Return: return pointer to first string
 */
char *_strcpy(char *dest, char *str)
{
	int len = 0;

	for (len = 0; str[len]; len++)
		dest[len] = str[len];
	dest[len] = '\0';
	return (dest);
}

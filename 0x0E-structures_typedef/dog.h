#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - dog description
 *
 * @name: it's name
 *
 * @age: it's age
 *
 * @owner: it's owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
int _strlen(char *s);

#endif

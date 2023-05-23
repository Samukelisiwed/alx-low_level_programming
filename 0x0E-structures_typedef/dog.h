#ifndef DOG_H
#define DOG_H

/**
* struct dog - Structure representing a dog
* @name: Name of the dog
* @age: Age of the dog
* @owner: Owner of the dog
*
* Description: Structure to store information about a dog.
*/

typedef struct dog

{
char *name;   /* Name of the dog */
float age;    /* Age of the dog */
char *owner;  /* Owner of the dog */
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif /* DOG_H */

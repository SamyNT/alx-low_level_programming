#ifndef DOG_H
#define DOG_H
/**
 * struct dog - structure containing dog information
 *
 * @name: dog name
 * @age: dog's age
 * @owner: name of dog's owner
 *
 * Description: will be used to store informations on dogs
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif /* DOG_H file */

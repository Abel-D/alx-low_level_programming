#ifndef DOG_H
#define DOG_H
/**
 * struct dog - definition of dog type
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
 * struct dog_t - new type definition of dog type
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */
typedef struct dog_t
{
	char *name;
	float age;
	char *owner;
} dog_t;
#endif

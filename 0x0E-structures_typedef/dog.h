#ifndef CRASHED_MACHINE
#define CRASHED_MACHINE

/**
 * struct dog - dogs database v:
 * @name: dog name
 * @owner: owner name
 * @age: dog age
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* CRASHED_MACHINE */

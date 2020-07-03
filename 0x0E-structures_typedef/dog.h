#ifndef DOG_H
#define DOG_H
/**
 * struct dog - struct
 * @name: variable char pointer
 * @age: variable float
 * @owner: variable char pointer
 * Description: this is the dog.h
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



#endif

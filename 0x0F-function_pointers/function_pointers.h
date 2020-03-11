#ifndef CRASHED_MACHINE
#define CRASHED_MACHINE

/* Prototypes */

/* functions that print a char. */
int _putchar(char c);

/* function that prints a name. */
void print_name(char *name, void (*f)(char *));

/* func that executes a func given as a parameter on each element of an arr. */
void array_iterator(int *array, size_t size, void (*action)(int));

/* function that searches for an integer. */
int int_index(int *array, int size, int (*cmp)(int));

#endif /* CRASHED_MACHINE */

#include <stdio.h>
#include "dog.h"

void print_dog(struct dog *d){

if (d == NULL) return;
else {
    if (&d->name == NULL) {
        printf("Dog name is NULL\n");
    }
    else {
        printf("Dog name is %s\n", d->name);
    }
    if (&d->age == NULL) {
        printf("Dog age is NULL\n");
    }
    else {
        printf("Dog age is %d\n", d->age);
    }
    if (&d->owner == NULL) {
        printf("Dog Owner is NULL\n");
    }
    else {
            printf("Dog Owner is %s\n", d->owner);
        }

}

}

int main(void)
{
    struct dog my_dog;

    // my_dog.name = NULL;
    my_dog.age = 3.5;
    my_dog.owner = "Bob";
    print_dog(&my_dog);
    return (0);
}

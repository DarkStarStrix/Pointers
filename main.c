// practice on pointers use the memory address of a variable and the value of a variable and swap them

#include <stdio.h>

__attribute__((unused)) void swap(int *a, int *b);
void print_and_swap(int *a, int *b);

int main()
{
    int a = 100;
    int b = 200;

    printf("Before swap, value of a : %d\n", a);
    printf("Before swap, value of b : %d\n", b);

    print_and_swap(&a, &b);

    printf("After swap, value of a : %d\n", a);
    printf("After swap, value of b : %d\n", b);

    return 0;
}

__attribute__((unused)) void swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

void print_and_swap(int *a, int *b)
{
    printf("Address of a: %p\n", a);
    printf("Value of a: %d\n", *a);

    printf("Address of b: %p\n", b);
    printf("Value of b: %d\n", *b);

    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}


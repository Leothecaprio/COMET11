#include <stdio.h>

int main() {
    int var = 10;
    int *ptr1, *ptr2, *ptr3;

    ptr1 = &var;
    ptr2 = &var;
    ptr3 = &var;

    printf("Initial value of var: %d\n", var);
    printf("Value using ptr1: %d\n", *ptr1);
    printf("Value using ptr2: %d\n", *ptr2);
    printf("Value using ptr3: %d\n", *ptr3);

    var = 20;
    printf("\nValue of var changed directly:\n");
    printf("Value of var: %d\n", var);
    printf("Value using ptr1: %d\n", *ptr1);
    printf("Value using ptr2: %d\n", *ptr2);
    printf("Value using ptr3: %d\n", *ptr3);

    *ptr1 = 30;
    printf("\nValue of var changed using ptr1:\n");
    printf("Value of var: %d\n", var);
    printf("Value using ptr1: %d\n", *ptr1);
    printf("Value using ptr2: %d\n", *ptr2);
    printf("Value using ptr3: %d\n", *ptr3);

    *ptr2 = 40;
    printf("\nValue of var changed using ptr2:\n");
    printf("Value of var: %d\n", var);
    printf("Value using ptr1: %d\n", *ptr1);
    printf("Value using ptr2: %d\n", *ptr2);
    printf("Value using ptr3: %d\n", *ptr3);

    *ptr3 = 50;
    printf("\nValue of var changed using ptr3:\n");
    printf("Value of var: %d\n", var);
    printf("Value using ptr1: %d\n", *ptr1);
    printf("Value using ptr2: %d\n", *ptr2);
    printf("Value using ptr3: %d\n", *ptr3);

    return 0;
}

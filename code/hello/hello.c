#include "../cs50.h"
#include "../cs50.c"
#include <stdio.h>

int main(void)
{
    // Gets name
    string name = get_string("Name: ");
    // Prints name
    printf("Hello, %s\n", name);
}
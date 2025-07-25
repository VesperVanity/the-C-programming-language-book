/*
The C Programming Language by Brian W. Kernighan & Dennis M. Ritchie
Chapter 1 Exercise 1-6, 1-7
File created: 2025-07-25
File last modified: 2025-07-25
Author: VesperVanity (VV) https://github.com/VesperVanity
*/
#include <stdio.h>

int main(void)
{
    int c;
    while((c = getchar()) != EOF)
    {
        putchar(c);
        printf("%d\n", c);
        printf("%d\n", EOF);
    }
    return 0;
}
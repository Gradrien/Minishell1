/*
** EPITECH PROJECT, 2021
** my_swap.c
** File description:
** swap two numbers
*/

#include <stddef.h>

void my_swap(int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b = c;
    return;
}

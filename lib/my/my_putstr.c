/*
** EPITECH PROJECT, 2021
** my_putstr
** File description:
** display character of a string
*/

#include <stddef.h>

void my_putchar(char c);

int my_putstr(char const *str)
{
    int i = 0;

    if (str == NULL)
        return (-1);
    while (str[i] != '\0') {
        my_putchar(str[i]);
        i = i + 1;
    }
    return (0);
}

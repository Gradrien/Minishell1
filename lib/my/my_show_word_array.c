/*
** EPITECH PROJECT, 2021
** show_word_array
** File description:
** show words
*/

#include <stddef.h>

void my_putchar(char c);
int my_putstr(char const *str);

int my_show_word_array(char * const *tab)
{
    int i = 0;

    if (tab == NULL)
        return (-1);
    while (tab[i] != 0) {
        my_putstr(tab[i]);
        my_putchar('\n');
        i = i + 1;
    }
    return (0);
}

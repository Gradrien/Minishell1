/*
** EPITECH PROJECT, 2021
** my_revstr
** File description:
** reverse a string
*/

#include <stddef.h>

int my_strlen(char const *str);

char *my_revstr(char *str)
{
    char temp;
    int first_char = 0;
    int last_char = my_strlen(str) - 1;

    if (str == NULL)
        return (NULL);
    while (first_char < last_char) {
        temp = str[first_char];
        str[first_char] = str[last_char];
        str[last_char] = temp;
        first_char = first_char + 1;
        last_char = last_char - 1;
    }
    return (str);
}

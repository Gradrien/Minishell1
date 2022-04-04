/*
** EPITECH PROJECT, 2021
** my_strdup
** File description:
** allocate mem and copy str
*/

#include <stddef.h>
#include <stdlib.h>

int my_strlen(char const *str);

char *my_strdup(char const *src)
{
    char *dest;
    int i = 0;

    if (src == NULL)
        return NULL;
    dest = malloc(sizeof(char) * (my_strlen(src) + 1));
    while (src[i] != '\0') {
        dest[i] = src[i];
        i = i + 1;
    }
    dest[i] = '\0';
    return (dest);
}

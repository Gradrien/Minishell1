/*
** EPITECH PROJECT, 2021
** my_strcat_file
** File description:
** my_strcat_file
*/

#include <stddef.h>

int my_strlen(char const *str);

char *my_strcat(char *dest, char const *src)
{
    int i = 0;
    int dest_length = my_strlen(dest);

    if (src == NULL)
        return (NULL);
    while (src[i] != '\0') {
        dest[dest_length + i] = src[i];
        i = i + 1;
    }
    dest[dest_length + i] = '\0';
    return (dest);
}

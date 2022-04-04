/*
** EPITECH PROJECT, 2021
** my_strstr
** File description:
** task05
*/

#include <stddef.h>

int my_strncmp(char const *s1, char const *s2, int n);
int my_strlen(char const *str);

char *my_strstr(char *str, char const *to_find)
{
    int i = 0;
    int i2 = 0;

    if (str == NULL)
        return (NULL);
    while (str[i] != '\0') {
        if (str[i] == to_find[0]) {
            i2 = my_strncmp(&str[i], to_find, my_strlen(to_find));
        } else if (i2 == 0) {
            return (&str[i]);
        }
    }
    i = i + 1;
}

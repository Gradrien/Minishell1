/*
** EPITECH PROJECT, 2021
** capitalize
** File description:
** capitalize
*/

#include <stddef.h>

char *my_strlowcase(char *str);

char *my_strcapitalize(char *str)
{
    int i = 0;

    if (str == NULL)
        return (NULL);
    my_strlowcase(str);
    while (str[i] != '\0') {
        if ((str[i - 1] < 48 || str[i - 1] > 57)
            && (str[i - 1] < 65 || str[i - 1] > 90)
            && (str[i - 1] < 96 || str[i - 1] > 122)
            && (str[i] >= 97 && str[i] <= 122))
            str[i] = str[i] - 32;
        i = i + 1;
    }
    return (str);
}

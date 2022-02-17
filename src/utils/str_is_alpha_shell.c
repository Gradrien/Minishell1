/*
** EPITECH PROJECT, 2022
** B-PSU-101-BDX-1-1-minishell1-adrien.ricou
** File description:
** is_alphanum_shell
*/

#include "my.h"

int str_isalpha_shell(char const *str)
{
    int i = 0;

    if (str == NULL)
        return (1);
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z'
        || str[i] >= 'A' && str[i] <= 'Z' || str[i] == '_') {
            i = i + 1;
        } else
            return (0);
    }
    return EXIT_FAILURE;
}

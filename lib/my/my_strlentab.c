/*
** EPITECH PROJECT, 2022
** B-PSU-101-BDX-1-1-minishell1-adrien.ricou
** File description:
** my_strlentab
*/

#include <stdio.h>

int my_strlen_tab(char **tab)
{
    int count = 0;

    for (int i = 0; tab[i] != NULL; ++i)
        ++count;
    return count;
}

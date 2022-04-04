/*
** EPITECH PROJECT, 2022
** B-PSU-101-BDX-1-1-minishell1-adrien.ricou
** File description:
** my_str_to_word_array
*/

#include <stdlib.h>
#include <stdio.h>

char *inf_cpy(char *inf_dest, char const *inf_src, int inf_n);
int my_strlen(char const *str);
char *my_strncpy(char *dest, char const *src, int n);

static int is_alphanum(char c)
{
    if (c <= ' ' || c >= 127)
        return 0;
    return 1;
}

int avoid_spaces(char *str, int index)
{
    if (str == NULL)
        return 84;
    if (str[index] == ' ' || str[index] == '\t') {
        while (str[index] == ' ' || str[index] == '\t')
            ++index;
    }
    return index;
}

int count_words(char *str)
{
    int index = 0;
    int words = 0;

    if (str == NULL)
        return 84;
    index = avoid_spaces(str, index);
    while (str[index] != '\0') {
        if ((str[index] == ' ' || str[index] == '\t') &&
        (str[index + 1] != ' ' && str[index + 1] != '\t')) {
            ++words;
        }
        ++index;
    }
    if (str[index - 1] == ' ' || str[index - 1] == '\t')
        words -= 1;
    return (words + 1);
}

char **my_str_to_tab(char *str)
{
    int words = count_words(str);
    char **tab = malloc(sizeof(char *) * (words + 1) + 1);
    int len = 0;
    int i = 0;
    int j = 0;

    while (str[i] != '\0') {
        if (is_alphanum(str[i]))
            len = len + 1;
        if (is_alphanum(str[i]) == 1 && is_alphanum(str[i + 1]) == 0) {
            tab[j] = malloc(len + 1);
            my_strncpy(tab[j], &str[i - len + 1], len);
            len = 0;
            j = j + 1;
        }
        i = i + 1;
    }
    tab[j] = NULL;
    return tab;
}

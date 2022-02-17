/*
** EPITECH PROJECT, 2022
** B-PSU-101-BDX-1-1-minishell1-adrien.ricou
** File description:
** my_unsetenv
*/

#include "my.h"

static void del_variable(char **tab, env_t *env_l)
{
    int i = 0;
    int len = my_strlen(tab[1]);
    env_t *temp = env_l;

    while (temp->next != NULL) {
        if ((my_strncmp(tab[1], temp->env_line, len) == 0)) {
            temp->next->prev = temp->prev;
            temp->prev->next = temp->next;
            temp->prev = NULL;
            i = 1;
            free(temp);
            return;
        }
        temp = temp->next;
    }
    if ((my_strncmp(tab[1], temp->env_line, len) == 0) && (i != 1)) {
        temp->prev->next = NULL;
        temp->prev = NULL;
    }
}

int my_unsetenv(char **tab, char **env, env_t *env_l)
{
    if (tab[1] == NULL)
        my_printf("%s: Too few arguments.\n", tab[0]);
    else
        del_variable(tab, env_l);
    return EXIT_SUCCESS;
}

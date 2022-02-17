/*
** EPITECH PROJECT, 2022
** B-PSU-101-BDX-1-1-minishell1-adrien.ricou
** File description:
** my_setenv
*/

#include "my.h"

static void set_variable(char **tab)
{
    if (tab[2] == NULL)
        tab[1] = my_strcat(tab[1], "=");
    else
        tab[1] = my_strcat(my_strcat(tab[1], "="),tab[2]);
}

static int error_variable(char **tab, char **env, env_t *env_l)
{
    if (tab[1][0] >= '0' && tab[1][0] <= '9') {
        my_printf("%s: Variable name must begin \
with a letter.\n", tab[0]);
        return EXIT_FAILURE;
    } else if (!str_isalpha_shell(tab[1])) {
        my_printf("%s: Variable name must contain \
alphanumeric characters.\n", tab[0]);
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}

int my_setenv(char **tab, char **env, env_t *env_l)
{
    if (tab[1] == NULL)
        return disp_env(tab, env, env_l);
    if (error_variable(tab, env, env_l) == EXIT_FAILURE)
        return EXIT_FAILURE;
    else if (tab[3] != NULL) {
        my_printf("%s: Too many arguments.\n", tab[0]);
    } else {
        set_variable(tab);
        create_new_node(&env_l, tab[1]);
    }
    return EXIT_SUCCESS;
}

/*
** EPITECH PROJECT, 2022
** B-PSU-101-BDX-1-1-minishell1-adrien.ricou
** File description:
** my_env
*/

#include "my.h"

char *get_home(char **env)
{
    int i = 0;

    while (env[i] != NULL) {
        if (my_strncmp(env[i], "HOME=", 5) == 0)
            return (env[i] + 5);
        ++i;
    }
    return NULL;
}

int disp_env(char **tab, char **env, env_t *env_l)
{
    if (env_l == NULL)
        return EXIT_SUCCESS;
    print_list(env_l);
    return EXIT_SUCCESS;
}

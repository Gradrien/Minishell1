/*
** EPITECH PROJECT, 2022
** B-PSU-101-BDX-1-1-minishell1-adrien.ricou
** File description:
** echo
*/

#include "my.h"

static int change_dir(char **tab, char **env, env_t *env_l)
{
    errno = 0;
    if (chdir(tab[1]) == -1)
        my_printf("%s: %s.\n", tab[1], strerror(errno));
    return EXIT_FAILURE;
}

int my_cd(char **tab, char **env, env_t *env_l)
{
    char *home = NULL;

    if (my_strcmp(tab[0], "cd") == 0 && tab[2] != NULL) {
        my_printf("%s: Too many arguments.\n", tab[0]);
        return EXIT_FAILURE;
    }
    if (my_strcmp(tab[0], "cd") == 0 && (tab[1] == NULL
        || (tab[1][0] == '-'))) {
        home = get_home(env);
        if (home == NULL)
            my_printf("cd: No home directory.\n");
        else
            chdir(home);
        return EXIT_SUCCESS;
    }
    return change_dir(tab, env, env_l);
}

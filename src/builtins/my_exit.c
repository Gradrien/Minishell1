/*
** EPITECH PROJECT, 2022
** B-PSU-101-BDX-1-1-minishell1-adrien.ricou
** File description:
** exit
*/

#include "my.h"

int my_exit(char **tab, char **env, env_t *env_l)
{
    int exit_status = 0;

    if (tab[1] == NULL || (tab[1][0] == '0' && tab[2] == NULL)) {
        my_printf("exit\n");
        free(tab);
        free_list(env_l);
        exit(EXIT_SUCCESS);
    } else if (my_str_isnum(tab[1]) == 0 && tab[2] == NULL) {
        exit_status = my_getnbr(tab[1]);
        my_printf("exit\n");
        free(tab);
        free_list(env_l);
        exit(exit_status);
    } else
        my_printf("exit: Expression Syntax.\n");
    return EXIT_SUCCESS;
}

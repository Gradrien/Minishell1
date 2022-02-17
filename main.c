/*
** EPITECH PROJECT, 2022
** B-PSU-101-BDX-1-1-minishell1-adrien.ricou
** File description:
** main
*/

#include "my.h"

static void run_shell(char **env, env_t *env_l)
{
    char *line = NULL;
    char **tab = NULL;
    size_t len = 0;
    ssize_t nread = 0;
    const cmd_t *command = NULL;

    my_printf("[adrien.ricou]$> ");
    while ((nread = getline(&line, &len, stdin)) != -1) {
        tab = my_str_to_tab(line);
        command = get_command(tab);
        check_command(command, tab, env, env_l);
        my_printf("[adrien.ricou]$> ");
    }
    my_printf("exit\n");
}

int main(int ac, char **av, char **env)
{
    env_t *env_l = init_list(env_l, env);

    if (ac != 1)
        return EPITECH_ERROR;
    else
        run_shell(env, env_l);
    if (!env)
        free_list(env_l);
    return EXIT_SUCCESS;
}

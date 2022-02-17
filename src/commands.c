/*
** EPITECH PROJECT, 2022
** B-PSU-101-BDX-1-1-minishell1-adrien.ricou
** File description:
** commands
*/

#include "my.h"

static const cmd_t shell_commands[] = {
    {.cmd = "env", .pf = &disp_env},
    {.cmd = "setenv", .pf = &my_setenv},
    {.cmd = "unsetenv", .pf = &my_unsetenv},
    {.cmd = "cd", .pf = &my_cd},
    {.cmd = "exit", .pf = &my_exit},
    {.cmd = NULL, .pf = NULL},
};

const cmd_t *get_command(char **tab)
{
    for (int i = 0; shell_commands[i].cmd != NULL; ++i) {
        if (!(my_strcmp(shell_commands[i].cmd, tab[0])))
            return &shell_commands[i];
    }
    return NULL;
}

int check_command(const cmd_t *command, char **tab, char **env, env_t *env_l)
{
    if (command)
        command->pf(tab, env, env_l);
    else if (tab[0] == NULL)
        return EXIT_SUCCESS;
    else
        exec_bin(tab, env, env_l);
    return EXIT_SUCCESS;
}

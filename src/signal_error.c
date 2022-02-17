/*
** EPITECH PROJECT, 2022
** B-PSU-101-BDX-1-1-minishell1-adrien.ricou
** File description:
** signal_error
*/

#include "my.h"

static int check_signal(int status)
{
    if (WTERMSIG(status) == SIGFPE)
        my_printf("Floating exception");
    else
        my_printf("%s", strsignal(WTERMSIG(status)));
    if (WCOREDUMP(status))
        my_printf(" (core dumped)");
    my_printf("\n");
    return EXIT_SUCCESS;
}

int signal_status(int status)
{
    if (WIFEXITED(status))
        return EXIT_SUCCESS;
    if (WIFSIGNALED(status))
        check_signal(status);
    return EXIT_SUCCESS;
}

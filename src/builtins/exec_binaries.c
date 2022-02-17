/*
** EPITECH PROJECT, 2022
** B-PSU-101-BDX-1-1-minishell1-adrien.ricou
** File description:
** my_ls
*/

#include "my.h"

char **parse_env(env_t *env)
{
    env_t *temp = env;
    char **tab = NULL;

    if (env == NULL)
        return NULL;
    while (temp->next != NULL) {
        if (my_strncmp(temp->env_line, "PATH=", 5) == 0) {
            temp->env_line += 5;
            tab = str_to_tab_path(temp->env_line);
            break;
        }
        temp = temp->next;
    }
    free(temp);
    return tab;
}

static char *cat_path(char **path, char **tab)
{
    int index = 0;
    char *path_cat = NULL;

    while (path[index] != NULL) {
        path_cat = path[index];
        path_cat = my_strdup(my_strcat(my_strcat(path_cat, "/"), tab[0]));
        if (!access(path_cat, F_OK) && !access(path_cat, X_OK))
            return path_cat;
        index++;
    }
    return NULL;
}

static char *get_cmd(char **tab, env_t *env_l)
{
    char **path = NULL;
    char *cmd = NULL;

    for (int i = 0; tab[0][i] != '\0'; i++) {
        if (tab[0][i] == '/') {
            cmd = tab[0];
            return cmd;
        }
    }
    path = parse_env(env_l);
    if (path == NULL)
        exit(EXIT_FAILURE);
    cmd = cat_path(path, tab);
    free(path);
    return cmd;
}

static int exec_cmd(char **tab, char **env, env_t *env_l)
{
    char *cmd = get_cmd(tab, env_l);

    errno = 0;
    if (execve(cmd, tab, env) == -1) {
        if (errno == EACCES) {
            my_printf("%s: %s.\n", tab[0], strerror(errno));
            exit(EXIT_FAILURE);
        }
        if (errno == ENOEXEC) {
            my_printf("%s: Exec format error. Wrong Architecture.\n", tab[0]);
            exit(EXIT_FAILURE);
        }
        my_printf("%s: Command not found.\n", tab[0]);
        exit(EXIT_FAILURE);
    }
    free(cmd);
    return EXIT_SUCCESS;
}

int exec_bin(char **tab, char **env, env_t *env_l)
{
    int status;
    pid_t pid = fork();

    if (pid == -1)
        return EPITECH_ERROR;
    else if (pid == 0) {
        exec_cmd(tab, env, env_l);
    } else {
        waitpid(pid, &status, WUNTRACED);
        return signal_status(status);
    }
}

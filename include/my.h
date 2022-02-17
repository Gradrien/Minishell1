/*
** EPITECH PROJECT, 2021
** my_header
** File description:
** header
*/

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <string.h>
#include <signal.h>
#include "lib.h"

#ifndef MY_HEADER
    #define MY_HEADER
    #define _GNU_SOURCE
    #define EPITECH_ERROR 84

    typedef struct list_env_s {
        char *env_line;
        struct list_env_s *next;
        struct list_env_s *prev;
    } env_t;

    typedef struct commands_s {
        char *cmd;
        int (*pf)(char **, char **, struct list_env_s *);
    } cmd_t;

    int str_isalpha_shell(char const *str);

    int signal_status(int status);

    int create_new_node(env_t **head, char *env_line);
    env_t *init_list(env_t *head, char **env);
    void free_list(env_t *list);
    void print_list(env_t *l_e);

    char **str_to_tab_path(char *str);
    void exec_commands(char **tab, char *line, char **env);
    int check_command(const cmd_t *command, char **tab,
    char **env, env_t *env_l);
    const cmd_t *get_command(char **tab);

    char **parse_env(env_t *env);
    int disp_env(char **tab, char **env, env_t *env_l);
    int my_setenv(char **tab, char **env, env_t *env_l);
    int my_unsetenv(char **tab, char **env, env_t *env_l);

    char *get_home(char **env);
    char *my_get_wd(char **env);

    int my_cd(char **tab, char **env, env_t *env_l);
    int my_exit(char **tab, char **env, env_t *env_l);
    int exec_bin(char **tab, char **env, env_t *env_l);

#endif /* MY_HEADER */

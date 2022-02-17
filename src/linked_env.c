/*
** EPITECH PROJECT, 2022
** B-PSU-101-BDX-1-1-minishell1-adrien.ricou
** File description:
** env_parser
*/

#include "my.h"

void print_list(env_t *l_e)
{
    if (!l_e)
        return;
    while (l_e != NULL) {
        my_printf("%s\n", l_e->env_line);
        l_e = l_e->next;
    }
    return;
}

int create_new_node(env_t **head, char *env_line)
{
    env_t *new = malloc(sizeof(env_t));
    env_t *temp = NULL;

    if (!new)
        return EPITECH_ERROR;
    new->env_line = env_line;
    new->next = NULL;
    new->prev = NULL;
    if (*head == NULL)
        *head = new;
    else {
        temp = *head;
        while (temp->next != NULL)
            temp = temp->next;
        new->prev = temp;
        temp->next = new;
    }
    return EXIT_SUCCESS;
}

void free_list(env_t *list)
{
    env_t *tmp = list;
    env_t *tmp2 = list;

    while (tmp->next != NULL) {
        tmp = tmp->next;
        free(tmp2);
        tmp2 = tmp;
    }
    free(tmp2);
}

env_t *init_list(env_t *head, char **env)
{
    head = malloc(sizeof(env_t));
    head = NULL;
    for (int i = 0; env[i] != NULL; ++i)
        create_new_node(&head, env[i]);
    return head;
}

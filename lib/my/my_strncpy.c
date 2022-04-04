/*
** EPITECH PROJECT, 2021
** my_strncpy
** File description:
** copies n character
*/

#include <stddef.h>

int my_strlen(char const *str);

char *inf_cpy(char *inf_dest, char const *inf_src, int inf_n)
{
    int i_inf = 0;
    int counter_inf = inf_n * 2;

    if (inf_n <= my_strlen(inf_src)) {
        while (counter_inf > inf_n) {
            inf_dest[i_inf] = inf_src[i_inf];
            i_inf = i_inf + 1;
            counter_inf = counter_inf - 1;
        }
    }
    return (inf_dest);
}

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;
    int counter_n = n * 2;

    if (src == NULL)
        return (NULL);
    inf_cpy(dest, src, n);

    if (n > my_strlen(src)) {
        while (counter_n > my_strlen(src)) {
            dest[i] = src[i];
            i = i + 1;
            counter_n = counter_n - 1;
        }
        while (n / 2 > my_strlen(src)) {
            dest[i] = '\0';
            n = n - 1;
        }
        return (dest);
    }
}

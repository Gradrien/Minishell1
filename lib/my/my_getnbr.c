/*
** EPITECH PROJECT, 2021
** MY_GETNBR
** File description:
** lzlzlzlz
*/

#include <stddef.h>

long my_getnbr(char const *str)
{
    long result = 0;
    long is_negatif = 1;
    int i = 0;

    if (str == NULL)
        return 84;

    while (str[i] == '-' || str[i] == '+') {
        if (str[i] == '-')
            is_negatif = is_negatif * (-1);
        i = i + 1;
    }
    while (str[i] >= '0' && str[i] <= '9') {
        result = result * 10 + (str[i] - '0');
        i = i + 1;
    }
    if (result > 2147483647 || result < -2147483648)
        return 84;
    return (result * is_negatif);
}

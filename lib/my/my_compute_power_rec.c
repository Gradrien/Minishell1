/*
** EPITECH PROJECT, 2021
** my_compute_power_rec
** File description:
** power of numbers with rec
*/

int my_compute_power_rec(int nb, int p)
{
    int res = 0;

    if (nb > 0 && p > 0) {
        res = nb * my_compute_power_rec(nb, p - 1);
    }
    if (nb == 0 || p < 0) {
        return (0);
    } else if (p == 0) {
        return (1);
    }
    return (res);
}

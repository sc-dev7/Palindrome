/*
** EPITECH PROJECT, 2022
** Palindrome
** File description:
** sc
*/

#include "my.h"

int base2(int b, int val)
{
    int res = 0; int pow = 1;
    while (val != 0) {
        res += val % b * pow;
        pow *= 10;
        val = val / b;
    }
    return res;
}

void invalid(void)
{
    printf("invalid argument\n");
    exit(84);
}

void error(int ac, val v, char **av)
{
    if (v.n == 1 && v.p == 1 || ac < 3 || ac > 9)
        invalid();
    if (v.base < 2 || v.base > 10 || v.imin < 0 || v.imax < 0
    || v.imin > v.imax)
        invalid();
    if (v.imax > 100 || v.imin > v.imax)
        invalid();
    if (v.p == 1) {
        if (palindrome(v.nb, v.base) == 0) {
            invalid();
        }
    }
    for (int i = 1; av[i] != NULL; i++) {
        if (verif_np(av[i]) == 1 && strcmp(av[i], "-n") != 0
        && strcmp(av[i], "-p") != 0 && strcmp(av[i], "-b")
        != 0 && strcmp(av[i], "-imin") != 0 && strcmp(av[i], "-imax") != 0) {
            invalid();
        }
    }
}

void palin(char **av, val *v)
{
    for (int i = 0; av[i] != NULL; i++) {
        if (strcmp(av[i], "-p") == 0) {
            (verif_np(av[i + 1]) == 1) ? invalid() : 0;
            v->p = 1;
            v->nb = atoi(av[i + 1]);
        } if (strcmp(av[i], "-n") == 0) {
            (verif_np(av[i + 1]) == 1) ? invalid() : 0;
            v->n = 1;
            v->nb = atoi(av[i + 1]);
        } if (strcmp(av[i], "-imin") == 0) {
            (verif_np(av[i + 1]) == 1) ? invalid() : 0;
            v->imin = atoi(av[i + 1]);
        } if (strcmp(av[i], "-imax") == 0) {
            (verif_np(av[i + 1]) == 1) ? invalid() : 0;
            v->imax = atoi(av[i + 1]);
        } if (strcmp(av[i], "-b") == 0) {
            (verif_np(av[i + 1]) == 1) ? invalid() : 0;
            v->base = atoi(av[i + 1]);
        }
    }
}

int main(int ac, char **av)
{
    val v; v.imin = 0; v.imax = 100; v.base = 10;
    if (ac % 2 == 0)
        invalid();
    if (strcmp(av[1], "-p") != 0 && strcmp(av[1], "-n") != 0)
        invalid();
    palin(av, &v);
    error(ac, v, av);
    if (strcmp(av[1], "-n") == 0) {
        flag_n(v);
    }
    if (strcmp(av[1], "-p") == 0) {
        flag_p(v);
    }
    return 0;
}

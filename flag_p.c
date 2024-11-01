/*
** EPITECH PROJECT, 2022
** Palindrome
** File description:
** sc
*/

#include "my.h"

int palindrome(int nb, int b)
{
    nb = base(10, b, nb);
    int rev = reverse_number(nb);
    return nb == rev;
}

void print_p(int j, int nb, int it, int b)
{
    printf("%d leads to %d in %d", j, nb, it);
    printf(" iteration(s) in base %d\n", b);
}

int flag_p(val v)
{
    int i = 0, j = 0, c = 0, it = 0, revnb = 0, a = base(10, v.base, v.nb);
    while (j <= v.nb) {
        i = j; it = 0;
        while (it <= v.imax) {
            int s = v.nb;
            i = base(10, v.base, i);
            revnb = reverse_number(i);
            (i == a && it >= v.imin) ? print_p(j, v.nb, it, v.base) : 0;
            (i == a && it >= v.imin) ? c++ : 0;
            i = base(v.base, 10, i);
            revnb = base(v.base, 10, revnb);
            i += revnb;
            it++;
        }
        j++;
    }
    if (c == 0) {
        printf("no solution\n");
    }
    return 0;
}

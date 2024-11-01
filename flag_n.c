/*
** EPITECH PROJECT, 2022
** Palindrome
** File description:
** sc
*/

#include "my.h"

int reverse_number(int nb)
{
    int rev = 0;
    while (nb != 0) {
        rev = rev * 10 + nb % 10;
        nb /= 10;
    }
    return rev;
}

int base(int base_x, int base_y, int val)
{
    int res = 0; int pow = 1;
    while (val != 0) {
        res += (val % base_y) * pow;
        pow *= base_x;
        val /= base_y;
    }
    return res;
}

int flag_n(val v)
{
    int revnb = 0, it = 0, valeur_d = v.nb;
    while (it <= v.imax) {
        int s = v.nb;
        v.nb = base(10, v.base, v.nb);
        revnb = reverse_number(v.nb);
        if (revnb == v.nb && it >= v.imin) {
            printf("%d leads to %d in %d iteration(s) ", valeur_d, s, it);
            printf("in base %d\n", v.base);
            return 0;
        }
        v.nb = base(v.base, 10, v.nb);
        revnb = base(v.base, 10, revnb);
        v.nb += revnb;
        it++;
    }
    printf("no solution\n");
    return 0;
}

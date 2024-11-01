/*
** EPITECH PROJECT, 2022
** lib.c
** File description:
** sc
*/

#include "my.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}

void my_putstr(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        my_putchar(str[i]);
    }
}

int my_strlen(char *str)
{
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return (len);
}

int my_putnbr(int nb)
{
    if (nb == -2147483648) {
        my_putstr("-2147483648");
        return (0);
    }
    if (nb < 0) {
        my_putchar('-');
        nb *= -1;
    }
    if (nb > 9) {
        my_putnbr(nb / 10);
        nb %= 10;
    }
    my_putchar(nb % 10 + '0');
    return (0);
}

int my_getnbr(char *str)
{
    long e = 1, pow = 1, result = 0;
    int i = 0;
    if (str[0] == '-') {
        e = -1;
        str = &str[1];
    }
    i = my_strlen(str) - 1;
    for (; i >= 0; i--) {
        result = result + (str[i] - 48) * pow;
        pow = pow * 10;
    }
    result = result * e;
    return result;
}

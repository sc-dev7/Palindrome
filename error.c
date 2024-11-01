/*
** EPITECH PROJECT, 2022
** Palindrome
** File description:
** sc
*/

#include "my.h"

int verif_b(char **av)
{
    int i = 0;
    while (av[4][i] != '\0') {
        if (av[4][i] < '0' || av[4][i] > '9') {
            printf("invalid argument\n");
            return 1;
        }
        i++;
    }
    return 0;
}

int verif_np(char *av)
{
    int i = 0;
    while (av[i] != '\0') {
        if (av[i] < '0' || av[i] > '9') {
            return 1;
        }
        i++;
    }
    return 0;
}

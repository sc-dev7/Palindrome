/*
** EPITECH PROJECT, 2022
** my.h
** File description:
** my all include
*/

#pragma once

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/wait.h>
#include <string.h>

typedef struct {
    int n;
    int p;
    int nb;
    int base;
    int imin;
    int imax;
} val;

    void my_putchar(char c);
    void my_putstr(char *str);
    int my_strlen(char *str);
    int my_putnbr(int nb);
    int my_getnbr (char *str);
    char *my_strcpy(char *dest, char *src);
    char *my_strdup(char *str);
    char **str_to_array(char *str);
    void put_tab(char **tab);
    int reverse_number(int nb);
    int base(int base_x, int base_y, int val);
    int palindrome(int nb, int b);
    int flag_p(val v);
    int flag_n(val v);
    int verif_b(char **av);
    int verif_np(char *av);

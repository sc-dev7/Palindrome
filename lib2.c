/*
** EPITECH PROJECT, 2022
** lib.c
** File description:
** sc
*/

#include "my.h"

char *my_strcpy(char *dest, char *src)
{
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

char *my_strdup(char *str)
{
    int i = 0;
    for (; str[i]; i += 1);
    char *temp = malloc(sizeof(char) * (i + 1));
    for (int i = 0; str[i]; i += 1)
        temp[i] = str[i];
    temp[i] = '\0';
    return temp;
}

char *my_strcat(char *dest, char *src)
{
    int i = 0;
    int j = my_strlen(src);
    int k = my_strlen(dest);
    while (src[i] != '\0') {
        dest[k] = src[i];
        i++;
        k++;
    }
    return dest;
}

void put_tab(char **tab)
{
    for (int i = 0; tab[i] != NULL; i++) {
        my_putstr(tab[i]);
        my_putchar('\n');
    }
}

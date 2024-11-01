/*
** EPITECH PROJECT, 2022
** Palindrome
** File description:
** sc
*/

int my_factrec_synthesis(int nb)
{
    if (nb > 12 || nb < 0) {
        return 0;
    }
    if (nb == 0) {
        return 1;
    }
    return (nb * my_factrec_synthesis(nb - 1));
}

int my_squareroot_synthesis(int nb)
{
    if (nb < 0) {
        return -1;
    }
    int i = 0;
    int result = -1;
    while (i * i <= nb) {
        if (i * i == nb) {
            result = i;
            break;
        }
        i++;
    }
    return result;
}

/*
** EPITECH PROJECT, 2023
** my
** File description:
** my_bsq
*/

#include "../include/include.h"

int my_condition(char *s, int i, int j)
{
    if (s[i] == '-')
        j = j * -1;
    return j;
}

int my_get_nbr(char *s)
{
    int i = 0;
    int j = 1;
    int nbr = 0;

    for (i; s[i]; i++) {
        if (s[i] == ' ')
            i++;
        if (s[i] == '-' || s[i] == '+')
            my_condition(s, i, j);
        if (s[i] >= '0' && s[i] <= '9') {
            nbr = nbr * 10;
            nbr = nbr +s[i] - '0';
        }
    }
    return (nbr * j);
}

char *my_boucle(int len , int nbr_print, char *at, char *str)
{
    int i = 2;
    int j = 0;
    int nb = my_strlen(at);

    for (int k = 0; i < len + 1; i++) {
        j++;
        if (j == nbr_print + 1) {
            str[i] = '\n';
            j = 0;
            k--;
        } else {
            str[i] = at[k % nb];
        }
        k++;
    }
    return str;
}

char *my_create_file(char *av, char *at)
{
    int nbr_print = my_get_nbr(av);
    int nb = my_strlen(at);
    int len = (nbr_print * nbr_print) + nbr_print;
    char *str = malloc(sizeof(char) * (len + 3));
    int i = 2;

    if (nb == 0 || nbr_print < nb || nbr_print <= 0 || nb <= 0)
        return NULL;
    str[i] = '\n';
    str[0] = '1';
    str[1] = '\n';
    my_boucle(len, nbr_print, at, str);
    return str;
}

/*
** EPITECH PROJECT, 2023
** my
** File description:
** my_bsq
*/

#include "../include/include.h"

static int my_find(char **tab, int c)
{
    int y = 0;
    int k = 1;

    if (tab[0][c] == 'o')
        return 0;
    while (tab[k] && tab[k][c + k]) {
        if (tab[k][c + k] == 'o')
            return (k);
        for (y = 0; tab[k][c + y] == '.' && y < k; ++y);
        if (y != k)
            return (k);
        for (y = 0; tab[y][c + k] == '.' && y < k; ++y);
        if (y != k)
            return (k);
        ++k;
    }
    return (k);
}

void get_coord(int *coord, int t, int y, int x)
{
    coord[0] = t;
    coord[1] = y;
    coord[2] = x;
}

int my_bsq(char **tab)
{
    int y = 1;
    int *coord = malloc(sizeof(int) * 3);
    int t = 0;

    coord[0] = 0;
    coord[1] = 0;
    coord[2] = 0;
    for (int x = 0; tab[y]; ) {
        t = my_find(&tab[y], x);
        if (t > coord[0])
            get_coord(coord, t, y, x);
        ++x;
        if (!tab[y][x]) {
            ++y;
            x = 0;
        }
    }
    print_bsq(tab, coord[1], coord[2] , coord[0]);
    return 0;
}

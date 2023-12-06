/*
** EPITECH PROJECT, 2023
** my
** File description:
** my_bsq
*/

#include "../include/include.h"

void print_bsq(char **tab, int y, int x, int size)
{
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            tab[y + i][x + j] = 'x';
        }
    }
    for (int i = 1; tab[i]; ++i) {
        my_putstr(tab[i]);
        my_putchar('\n');
    }
}

int main(int ac, char **av)
{
    char *buff = NULL;
    char **tab = NULL;

    if (ac == 3) {
        buff = my_create_file(av[1], av[2]);
        if (buff == NULL)
            return ERROR;
        tab = my_str_to_word_array(buff);
    } else {
        buff = open_file(av[1]);
        tab = my_str_to_word_array(buff);
    }
    if (ac > 4 || buff == NULL || tab == NULL)
        return (84);
    my_bsq(tab);
    if (ac == 2)
        free(buff);
    return 0;
}

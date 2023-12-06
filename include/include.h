/*
** EPITECH PROJECT, 2023
** include
** File description:
** include
*/

#pragma once

#include "../lib/my/libmy.h"

#include <sys/stat.h>
#include <pwd.h>
#include <grp.h>
#include <dirent.h>

#define SUCCESS 0
#define FAILURE 1
#define ERROR 84

char **my_str_to_word_array(char const *str);
int my_bsq(char **tab);
void print_bsq(char **tab, int y, int x, int size);
char *open_file(char *str);
char *my_create_file(char *av, char *at);

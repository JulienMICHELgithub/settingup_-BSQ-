/*
** EPITECH PROJECT, 2023
** my
** File description:
** lib_my
*/

#pragma once

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

void my_putchar(const char c);
int my_putstr(char *str);
void my_putstr_dir(char *str);
int my_strlen(char *str);
int my_put_nbr(int nb);
char *my_concat(char *s1, char *s2);
char *my_strcpy(char *dest, char *src);

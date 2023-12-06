/*
** EPITECH PROJECT, 2023
** my
** File description:
** my_bsq
*/

#include "../include/include.h"

char *open_file(char *str)
{
    int fd = open(str, O_RDONLY);
    char *buff = NULL;
    struct stat sb;

    if (fd == -1)
        return NULL;
    if (stat(str, &sb) == -1) {
        close(fd);
        return NULL;
    }
    buff = malloc(sizeof(char) * (sb.st_size + 1));
    if (!buff)
        return NULL;
    buff[sb.st_size] = '\0';
    read(fd, buff, sb.st_size);
    close(fd);
    return (buff);
}

/*
** EPITECH PROJECT, 2019
** load char ** 
** File description:
** load_chartab
*/

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "./include/my.h"

char **malloc_tab1(char *buffer)
{
    int nb_rows = my_strlen_lines(buffer);
    int nb_cols = my_strlen_col(buffer);
    char **tab = malloc(sizeof(char *) * nb_rows);
    int i = 0;

    if (!tab) {
        return (NULL);
    }
    while (i < nb_rows) {
        tab[i] = malloc(sizeof(char) * nb_cols);
        if (tab[i] == NULL) {
            return (NULL);
        }
        i++;
    }
    return (tab);
}

char **load_map_tab1(char **tab, char *buffer)
{
    int i = 0;
    int y = 0;
    int x = 0;
    char *buf;

    buf = rm_firstline(buffer);
    while (buf[i] != '\0') {
        tab[y][x] = buf[i];
        if (buf[i] == '\n') {
            y++;
            x = 0;
        }
        else
        {
            x++;
        }
        i++;
    }
    return (tab);
}
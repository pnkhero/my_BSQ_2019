/*
** EPITECH PROJECT, 2019
** load_to_tab
** File description:
** put the map in a db tab
*/

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "./include/my.h"

int **malloc_tab(char *buffer)
{
    int nb_rows = my_strlen_lines(buffer);
    int nb_cols = my_strlen_col(buffer);
    int **tab = malloc(sizeof(int *) * nb_rows);
    int i = 0;

    if (!tab) {
        return (NULL);
    }
    while (i < nb_rows) {
        tab[i] = malloc(sizeof(int) * nb_cols);
        if (tab[i] == NULL) {
            return (NULL);
        }
        i++;
    }
    return (tab);
}

int **load_map_tab(int **tab, char *buffer)
{
    int i = 0;
    int y = 0;
    int x = 0;
    char *buf;

    buf = rm_firstline(buffer);
    while (buf[i] != '\0') {
        tab[y][x] = chartoint(buf[i]);
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

void printab(char **map, char *buffer)
{
    int i = 0;
    int j = 0;
    int nb_rows = my_strlen_lines(buffer);
    int nb_cols = my_strlen_col(buffer);

    while (i < nb_rows) {
        while (j < nb_cols) {
            my_putchar(map[i][j]);
            j++;

        }
        j = 0;
        my_putstr("\n");
        i++;
    }
}

int main(int argc, char **argv)
{
    char *buffer;
    char *endbuffer;
    int nb_col = 0;
    int **tab;
    char **map;
    int big = 0;

    endbuffer = display_endmap_bsq(argv[1]);
    buffer = display_map_bsq(argv[1]);
    nb_col = my_strlen_col(buffer);
    tab = malloc_tab(buffer);
    map = malloc_tab1(endbuffer);
    map = load_map_tab1(map, endbuffer);
    tab = load_map_tab(tab, buffer);
    my_algo(tab, buffer);
    big = find_biggest_square(tab, buffer, map);
    map = put_x(big, buffer, map, tab);
    printab(map, buffer);
}
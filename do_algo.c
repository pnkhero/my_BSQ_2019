/*
** EPITECH PROJECT, 2019
** algo
** File description:
** do_algo
*/

#include "./include/my.h"
#include <stdio.h>

int **my_algo(int **tab, char *buffer)
{
    int a = 0, b = 0, x = 1, y = 1;
    int nb_rows = my_strlen_lines(buffer);
    int nb_cols = my_strlen_col(buffer);

    while (y < nb_rows) {
        while (x < nb_cols) {
            if (tab[y][x] == 0) {
                a = y;
                b = x;
                x++;
            } else {
                tab[y][x] = my_find_nb(tab, y, x);
                x++;
            }
        }
        x = 1;
        y++;
    }
}

int my_find_nb(int **tab, int y, int x)
{
    int num1 = tab[y - 1][x - 1];
    int num2 = tab[y - 1][x];
    int num3 = tab[y][x - 1];

    if (num2 <= num3 && num2 <= num1)
        return (num2 + 1);
    else if (num3 <= num2 && num3 <= num1)
        return (num3 + 1);
    else
        return (num1 + 1);
}

int find_biggest_square(int **tab, char *buffer, char **map)
{
    int x = 0, y = 1, a = 0, z = 0, big = 0;
    int nb_rows = my_strlen_lines(buffer);
    int nb_cols = my_strlen_col(buffer);

    while (y < nb_rows) {
        x = 0;
        while (x < nb_cols) {
            if (big < tab[y][x]) {
                big = tab[y][x];
                a = x;
                z = y;
                x++;
            } else
                x++;
        }
        x = 1;
        y++;
    }
    bignb(big, &z, &a, tab);
    return (big);
}

char **put_x(int big, char *buffer, char **map, int **tab)
{
    int y = 0, x = 0, i = 0, j = 0;
    int nb_rows = my_strlen_lines(buffer);
    int nb_cols = my_strlen_col(buffer);
    
    while (j < nb_rows) {
        while (i < nb_cols) {
            if (tab[j][i] == -2) {
                map[j][i] = 'x';
            }
            i++;
        }
        i = 0;
        j++;
    }
    return (map);
}

int **bignb(int big, int *y, int *x, int **tab)
{
    for (int i = 0; i < big; i++)
    {
        for (int j = 0; j < big; j++)
        {
            tab[*y][*x - j] = -2;
        }
    *y = *y - 1; 
    }
    return (tab);
}
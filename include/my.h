/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** proto
*/

#ifndef MY_H_
#define MY_H_

int open_bsq (char const *filepath);
char *read_bsq(int fd, char *buffer, int size);
char *display_map_bsq(char *argv);
int **malloc_tab(char *buffer);
int **load_map_tab(int **tab, char *buffer);
void printab(char **tab, char *buffer);
int my_strlen_lines(char const *str);
int my_strlen_col(char const *str);
int my_putchar(char c);
int my_putcerror(char c);
int my_putstr_error(char const *str);
int my_putstr(char const *str);
int my_strlen(char const *str);
char *rm_firstline(char *buffer);
int chartoint(char c);
int my_strlen(char const *str);
int **my_algo(int **tab, char *buffer);
int my_find_nb(int **tab, int y, int x);
int find_biggest_square(int **tab, char *buffer, char **map);
char **put_x(int big, char *buffer, char **map, int **tab);
char **malloc_tab1(char *buffer);
char **load_map_tab1(char **tab, char *buffer);
char *display_endmap_bsq(char *argv);
int my_put_nbr(int nb);
int **bignb(int big, int *y, int *x, int **tab);
#endif /* !MY_H_ */

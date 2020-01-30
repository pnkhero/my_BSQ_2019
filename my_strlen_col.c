/*
** EPITECH PROJECT, 2018
** my_strlen_col
** File description:
** Pas de fichier ici, juste un exemple d'en-tête epitech
*/

#include <string.h>
#include "./include/my.h"

int my_strlen_col(char const *str)
{
    int j = 0;
    int i = 0;
    while (str[i] != '\n') {
        i++;
    }
    i = i + 1;
    while (str[i] != '\n') {
        j++;
        i++;
    }    
    return (j);
}

int my_strlen_col1(char const *str)
{
    int i = 0;

    while (str[i] != '\n') {
        i++;
    }
    return (i);
}
/*
** EPITECH PROJECT, 2018
** my_strlen_lines
** File description:
** Pas de fichier ici, juste un exemple d'en-tête epitech
*/

#include <string.h>
#include "./include/my.h"

int my_strlen_lines(char const *str)
{
    int i = 0;
    int j = 0;
    while (str[i] != '\n') {
        i++;
    }
    i = i + 1;
    while (str[i] != '\0') {
        if (str[i] == '\n') {
            j++;
        }
        i++;
    }
    return (j);
}
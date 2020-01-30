/*
** EPITECH PROJECT, 2018
** my_putstr
** File description:
** Pas de fichier ici, juste un exemple d'en-tête epitech
*/

#include <unistd.h>
#include <string.h>
#include "./include/my.h"

int my_putstr_error(char const *str)
{
    int i = 0;
    while (str[i] != '\0') {
        my_putcerror(str[i]);
        i++;
    }
    return (84);
} 

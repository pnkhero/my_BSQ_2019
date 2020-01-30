/*
** EPITECH PROJECT, 2019
** my_chartoint.c
** File description:
** convert char to int
*/

int chartoint(char c)
{
    int dig = 0;

    if (c != '\n') {
        dig = c - 48;
    }
    return (dig);
}
//mettre le \n en caractere  

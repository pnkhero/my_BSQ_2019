/*
** EPITECH PROJECT, 2018
** my_putchar
** File description:
** No file there , just an epitech header example
*/

#include <unistd.h>
#include "./include/my.h"

int my_putchar(char c)
{
    write(1, &c, 1);
}

int my_putcerror(char c)
{
    write(2, &c, 1);
}

/*
** EPITECH PROJECT, 2019
** rm_firstline
** File description:
** rm_firstline
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include "./include/my.h"

char *rm_firstline(char *buffer)
{
    int size = 0;
    int i = 0;
    int j = 0;
    char *buf;

    size = my_strlen(buffer);
    buf = malloc(sizeof(char) * size);
    while (buffer[i] != '\n') {
        i++;
    }
    i = i + 1;
    while (buffer[i] != '\0') {
        buf[j] = buffer[i];
        i++;
        j++;
    }
    buf[j] = '\0';
    return (buf);
}
/*
** EPITECH PROJECT, 2019
** openread bsq
** File description:
** open and read map
*/

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "./include/my.h"

int open_bsq(char const *filepath)
{
    int fd = open(filepath, O_RDONLY);

    if (fd == -1)
        my_putstr_error("open failed\n");
    return (fd);
}

char *read_bsq(int fd, char *buffer, int size)
{
    int reader = read(fd, buffer, size);

	if  (reader == -1) {
        my_putstr_error("read failed\n"); 
    }
    buffer[size] = '\0';
    return (buffer);	
}

char *display_map_bsq(char *argv)
{
    struct stat st;
    int fd;
    int size = 0;
    char *buffer;
    int pos = 0;

    stat(argv, &st);
    size = st.st_size;
    buffer = malloc(sizeof(char) * (size + 1));
    fd = open_bsq(argv);
    read_bsq(fd, buffer, size);
    for(pos = 0; buffer[pos] != '\0'; pos++) {
        if (buffer[pos] == '.')
            buffer[pos] = '1';
        if (buffer[pos] == 'o')
            buffer[pos] = '0';
    }
    return (buffer);
}

char *display_endmap_bsq(char *argv)
{
    struct stat st;
    int fd;
    int size = 0;
    char *buffer;
    int pos = 0;

    stat(argv, &st);
    size = st.st_size;
    buffer = malloc(sizeof(char) * size + 1);
    fd = open_bsq(argv);
    read_bsq(fd, buffer, size);
    return (buffer);
}


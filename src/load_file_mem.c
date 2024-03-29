/*
** EPITECH PROJECT, 2020
** bsq
** File description:
** load_file_mem
*/

#include "bsq.h"

char *load_file_in_mem(char const *filepath)
{
    int op = open(filepath, O_RDONLY);
    struct stat st;
    int i = 0;
    int j = stat(filepath, &st);
    int size = st.st_size;
    int len;
    char *dest = malloc(sizeof(char) * (size + 1));

    if (op == -1)
        return (NULL);
    else
        while ((len = read(op, dest + i, size - i)) > 0) {
            i = i + len;
        }
    close(op);
    dest[i] = '\0';
    return (dest);
}
/*
** EPITECH PROJECT, 2020
** bsq
** File description:
** load_arr_from_file
*/

#include "bsq.h"

int my_adjust(bsq_t *bsq)
{
    int i = 0;

    for (; bsq->fl[i] != '\n'; i += 1);
    return (i + 1);
}

char **load_2d_arr_from_file(bsq_t *bsq)
{
    char **dim2 = mem_alloc_2d_array(bsq);
    int i = 0;
    int j = 0;
    int h = my_adjust(bsq);

    for (i = 0; i < bsq->line; i += 1, j = 0, h += 1) {
        for (j = 0; j < bsq->column; h += 1, j += 1)
            dim2[i][j] = bsq->fl[h];
        dim2[i][j] = '\0';
    }
    dim2[i] = NULL;
    return (dim2);
}
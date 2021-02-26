/*
** EPITECH PROJECT, 2020
** bsq
** File description:
** mem_alloc_array
*/

#include <stdlib.h>
#include "../include/bsq.h"

char **mem_alloc_2d_array(bsq_t *bsq)
{
    char **dimdim = malloc(sizeof(char *) * (bsq->line));

    for (int i = 0; i < bsq->line; i += 1)
        dimdim[i] = malloc(sizeof(char) * (bsq->column + 1));
    return (dimdim);
}
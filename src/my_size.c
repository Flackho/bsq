/*
** EPITECH PROJECT, 2020
** delivery
** File description:
** my_size
*/

#include "../include/bsq.h"
#include <stdlib.h>

int *my_size(bsq_t *bsq)
{
    int *s = malloc(sizeof(int) * 5);

    s[0] = 0;
    s[1] = 0;
    s[2] = 0;
    s[3] = bsq->line;
    s[4] = bsq->column;
    return (s);
}

int *bsq_size(bsq_t *bsq)
{
    int *s = my_size(bsq);
    int i;
    int j;

    for (i = 0; i < bsq->line; i += 1) {
        for (j = 0; j < bsq->column; j += 1) {
            if (bsq->array[i][j] > s[0]) {
                s[0] = bsq->array[i][j];
                s[1] = i;
                s[2] = j;
            }
        }
    }
    return (s);
}

int my_minimum(int x, int y, int z)
{
    if (x <= y && x <= z)
        return (x);
    if (y <= x && y <= z)
        return (y);
    if (z <= x && z <= y)
        return (z);
}

void my_square_size(bsq_t *bsq, int i, int j)
{
    if (bsq->array[i][j] != 0) {
        bsq->array[i][j] = my_minimum(bsq->array[i - 1][j],
        bsq->array[i][j - 1], bsq->array[i - 1][j - 1]) + 1;
    }
}

void my_square(bsq_t *bsq)
{
    int i = 1;
    int j = 1;

    for (i; i < bsq->line; i += 1) {
        for (j = 1; j < bsq->column; j += 1)
            my_square_size(bsq, i, j);
    }
}
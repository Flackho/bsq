/*
** EPITECH PROJECT, 2020
** delivery
** File description:
** bsq
*/

#include "bsq.h"

int **init_array(bsq_t *bsq)
{
    int **table = malloc(sizeof(int *) * (bsq->line));
    int i;
    int j;

    for (i = 0; i < bsq->line; i += 1) {
        table[i] = malloc(sizeof(int) * bsq->column);
    }
    for (i = 0; i < bsq->line; i += 1) {
        for (j = 0; j < bsq->column; j += 1) {
            if (bsq->table[i][j] == 'o')
                table[i][j] = 0;
            else
                table[i][j] = 1;
        }
    }
    return (table);
}

int bsqfnctn(bsq_t *bsq)
{
    bsq->table = load_2d_arr_from_file(bsq);
    bsq->array = init_array(bsq);

    my_square(bsq);
    bsq->cd = bsq_size(bsq);
    my_display(bsq);
    return (0);
}

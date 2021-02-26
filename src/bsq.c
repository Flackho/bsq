/*
** EPITECH PROJECT, 2020
** delivery
** File description:
** bsq
*/

#include "../include/bsq.h"
#include <stdlib.h>
#include <unistd.h>

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

void my_display(bsq_t *bsq)
{
    int i;
    int j;

    for (i = 0; i < bsq->cd[0]; i += 1) {
        for (j = 0; j < bsq->cd[0]; j += 1)
            bsq->table[bsq->cd[1] - i][bsq->cd[2] - j] = 'x';
    }
    for (i = 0; i < bsq->cd[3]; i += 1) {
        write(1, bsq->table[i], bsq->cd[4]);
        my_putchar('\n');
    }
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

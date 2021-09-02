/*
** EPITECH PROJECT, 2021
** bsq
** File description:
** display
*/

#include "bsq.h"

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
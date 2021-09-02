/*
** EPITECH PROJECT, 2020
** delivery
** File description:
** my_column
*/

#include "bsq.h"

int my_column(bsq_t *bsq)
{
    bsq->count = 0;
    int i = 0;

    for (; bsq->fl[bsq->count] != '\n'; bsq->count += 1);
    for (bsq->count = bsq->count + 1; bsq->fl[bsq->count] != '\n'; i += 1,
    bsq->count += 1);
    return (i);
}
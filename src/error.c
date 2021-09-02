/*
** EPITECH PROJECT, 2021
** bsq
** File description:
** error
*/

#include "bsq.h"

int my_error1(bsq_t *bsq)
{
    int i;

    for (i = 0; bsq->fl[i] != '\n'; i += 1);
    for (i += 1; bsq->fl[i] != '\0'; i += 1) {
        if (bsq->fl[i] != 'o' && bsq->fl[i] != '.' && bsq->fl[i] != '\n')
            return (84);
    }
    return (0);
}
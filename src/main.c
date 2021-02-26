/*
** EPITECH PROJECT, 2020
** delivery
** File description:
** main
*/

#include "../include/bsq.h"
#include <stdlib.h>

int main(int ac, char **av)
{
    bsq_t *bsq = malloc(sizeof(bsq_t));

    if (ac != 2)
        return (84);
    bsq->fl = load_file_in_mem(av[1]);
    if (bsq->fl[0] == 0)
        return (84);
    bsq->column = my_column(bsq);
    bsq->line = my_getnbr(bsq->fl);
    bsqfnctn(bsq);
    return (0);
}

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
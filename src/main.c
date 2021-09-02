/*
** EPITECH PROJECT, 2020
** delivery
** File description:
** main
*/

#include "bsq.h"

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
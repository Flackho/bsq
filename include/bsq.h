/*
** EPITECH PROJECT, 2020
** delivery
** File description:
** bsq
*/

#ifndef BSQ_H_
#define BSQ_H_

//include
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

//struct
typedef struct bsq {
    char **table;
    int *cd;
    char *fl;
    int **array;
    int line;
    int column;
    int count;
}bsq_t;

//functions
int my_getnbr(char const *str);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_putchar(char c);
int my_put_nbr(int nb);

//source
char *load_file_in_mem(char const *filepath);
char **load_2d_arr_from_file(bsq_t *bsq);
char **mem_alloc_2d_array(bsq_t *bsq);
int *bsq_size(bsq_t *bsq);
int *my_size(bsq_t *bsq);
int my_minimum(int x, int y, int z);
void my_square_size(bsq_t *bsq, int i, int j);
void my_display(bsq_t *bsq);
int bsqfnctn(bsq_t *bsq);
int **init_array(bsq_t *bsq);
int my_put_border(char **table, int ln, int co);
int my_column(bsq_t *bsq);
void my_square(bsq_t *bsq);
int my_error1(bsq_t *bsq);
int my_adjust(bsq_t *bsq);

#endif
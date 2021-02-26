/*
** EPITECH PROJECT, 2020
** putnbr
** File description:
** none
*/

void my_putchar(char c);

int my_put_nbr(int nb)
{
    int over;
    if (nb == -2147483648) {
        my_putchar('-');
        my_putchar('2');
        nb = 147483648;
    }
    if  (nb<0) {
        my_putchar ('-');
        nb = -nb;
    }
    if (nb>9) {
        my_put_nbr(nb/10);
    }
    over = nb % 10 + 48;
    my_putchar(over);
    return (0);
}

/*
** EPITECH PROJECT, 2020
** putstr
** File description:
** none
*/

void my_putchar(char c);

int my_putstr(char const *str)
{
    int c = 0;

    while (str[c] != '\0') {
        my_putchar(str[c]);
        c = c + 1;
    }
    return (0);
}

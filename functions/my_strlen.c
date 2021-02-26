/*
** EPITECH PROJECT, 2020
** my_strlen
** File description:
** number of characters found in string
*/

int my_strlen(char const *str)
{
    int len = 0;

    while (str[len] != '\0') {
        len = len + 1;
    }
    return (len);
}

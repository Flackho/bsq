/*
** EPITECH PROJECT, 2020
** none
** File description:
** nOne
*/

int my_getnbr(char const *str)
{
    int j = 0;
    int count = 0;
    int res = 0;

    while (str[j] == '+' || str[j] == '-') {
        if (str[j] == '-')
            count += 1;
        j += 1;
    }
    while (str[j] <= 57 && str[j] >= 48) {
        res = res * 10 + str[j] - 48;
        j += 1;
    }
    if (count % 2 != 0)
        res = res * -1;
    return (res);
}

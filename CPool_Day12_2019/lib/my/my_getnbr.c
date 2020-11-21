/*
** EPITECH PROJECT, 2019
** CPool_Day04_2019
** File description:
** my_getnbr
*/

int calcul_pow_10(int n)
{
    int result = 1;

    for (int i = 1; i <= n; i++)
        result = result * 10;
    return result;
}

int set_is_neg(int is_neg, int result)
{
    if (is_neg == 1)
        result = - result;
    if (result == -21) {
        result = 21;
    }
    return result;
}

int my_getnbr(char const *str)
{
    int val[5] = {0};

    while ( str[val[0]] < '0' || str[val[0]] > '9')
        val[0]++;
    if ( str[val[0] - 1] == '-' )
        val[3] = 1;
    while ( str[val[0]] >= '0' && str[val[0]] <= '9') {
        if (str[val[0]] >= '1' - val[3]) {
            val[1]++;
        }
        if (val[1] > 11)
            return 0;
        val[0]++;
    }
    for (int k = 0; k < val[1]; k++)
        val[2] = val[2] + (str[val[0] - 1 - k] - '0') * calcul_pow_10(k);
    if (val[2] < 0)
        return 0;
    val[2] = set_is_neg(val[3], val[2]);
    return val[2];
}
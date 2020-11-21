/*
** EPITECH PROJECT, 2019
** CPool_Day08_2019
** File description:
** libmy
*/

#ifndef MY_LIB
#define MY_LIB

int my_compute_power_rec(int nb, int p);
int my_compute_square_root(long long nb);
int my_find_prime_sup(int nb);
int my_getnbr(char const *str);
int my_is_prime(long long nb);
int my_isneg(int n);
int my_put_nbr(int nb);
void my_putchar(char c);
int my_putstr(char const *str);
char *my_revstr(char *str);
int my_showmem(char const *str, int size);
int my_showstr(char const *str);
void my_sort_int_array(int *array, int size);
int my_str_isalpha(char const *str);
int my_str_islower(char const *str);
int my_str_isnum(char const *str);
int my_str_isprintable(char const *str);
int my_str_isupper(char const *str);
char *my_strcapitalize(char *str);
char *my_strcat(char *dest, char const *src);
int my_strcmp(char const *s1, char const *s2);
char *my_strcpy(char *dest, char const *src);
int my_strlen(char const *str);
char *my_strlowcase(char *str);
char *my_strncat(char *dest, char const *src, int nb);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strncpy(char *dest, char const *src, int n);
char *my_strstr(char *str, char const *to_find);
char *my_strupcase(char *str);
void my_swap(int *a, int *b);
int cal_square(int n, long long nb);
int calcul_pow_10(int n);
int set_is_neg(int is_neg, int result);
int cal_is_prime(int n ,long long nb);
void display_nbr(int nb);
void is_sup(int *array ,int i ,int j);
void check_all_char(char *str, int i);
int detect_first_alpha_char(char *s, int i);
int is_up(char c);
int is_low(char c);
int my_show_word_array(char * const *tab);
int is_an(char c);
char **alloc_memory_word_array(char const *str);
char **assign_word_array(char **str_array, char const *str, char *str_c,int *v);
char **my_str_to_word_array(char const *str);
char *my_strdup(char const *src);

#endif
/*
** EPITECH PROJECT, 2021
** my_header
** File description:
** header_lib
*/

#ifndef LIB_HEADER
    #define LIB_HEADER

    void my_putchar(char c);
    char *my_strdup(char const *src);
    int my_put_nbr(int nb);
    long my_getnbr(char const *str);
    int my_show_word_array(char * const *tab);
    int nb_neg(int neg);
    char *inf_cpy(char *inf_dest, char const *inf_src, int inf_n);
    char *my_strstr(char *str, char const *to_find);
    int my_isneg(int nb);
    int my_strcmp(char const *s1, char const *s2);
    int my_put_nbr(int nb);
    int my_strncmp(char const *s1, char const *s2, int n);
    void my_swap(int *a, int *b);
    char *my_strupcase(char *str);
    int my_putstr(char const *str);
    char *my_strlowcase(char *str);
    int my_strlen(char const *str);
    char *my_strcapitalize(char *str);
    int my_str_isalpha(char const *str);
    void my_sort_int_array(int *tab, int size);
    int my_str_isnum(char const *str);
    int my_compute_power_rec(int nb, int power);
    int my_str_islower(char const *str);
    int my_compute_square_root(int nb);
    int my_str_isupper(char const *str);
    int my_find_prime_sup(int nb);
    int my_showstr(char const *str);
    char *my_strcpy(char *dest, char const *src);
    int my_showmem(char const *str, int size);
    char *my_strncpy(char *dest, char const *src, int n);
    char *my_strcat(char *dest, char const *src);
    char *my_revstr(char *str);
    char *my_strncat(char *dest, char const *src, int nb);
    int my_put_nbr(int nb);
    int my_show_word_array(char * const *tab);
    int nb_neg(int neg);
    int my_printf(char *str, ...);
    void flag_s_cap(char *str, va_list ap, int index);
    void basic_flags(char *str, va_list ap, int index);
    void convert_flags(char *str, va_list ap, int index);
    void get_str_adress(char *str, va_list ap, int index);
    int space_case_flag(char *str, va_list ap, int index);
    int long_long_flags(char *str, va_list ap, int index);
    int long_flags(char *str, va_list ap, int index);
    void my_uns_put_nbr_long(unsigned long nb);
    void my_put_nbr_long(long nb);
    void my_put_nbr_long_long(long long nb);
    void my_uns_put_nbr_long_long(unsigned long long nb);
    int my_str_isprintable(char const *str);
    void my_unsigned_convert_bin(unsigned int nb);
    void my_unsigned_convert_hexa(unsigned long nb);
    void my_unsigned_convert_hexa_low(unsigned long nb);
    void my_unsigned_convert_oct(unsigned long nb);
    void my_put_nbr_base(unsigned long nb, char *base);
    int my_convert_bin(int nb);
    int my_convert_hexa(int nb);
    int nb_neg_oct(int neg);
    int my_convert_oct(int nb);
    char **my_str_to_tab(char *str);

#endif /* LIB_HEADER */

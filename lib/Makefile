##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## compile
##

SRC =		my/my_printf/my_convert_bin.c     \
			my/my_printf/my_str_isprintable.c     \
			my/my_printf/my_unsigned_convert_bin.c     \
			my/my_printf/my_unsigned_convert_hexa.c     \
			my/my_printf/my_unsigned_convert_oct.c     \
			my/my_printf/my_convert_hexa.c     \
			my/my_printf/my_put_nbr_base.c     \
			my/my_printf/my_convert_oct.c     \
			my/my_printf/my_unsigned_convert_hexa_low.c     \
			my/my_printf/my_printf.c     \
			my/my_printf/long_flags.c     \
			my/my_printf/basic_flags.c     \
			my/my_printf/my_put_nbr_long.c     \
			my/my_printf/my_put_nbr_long_long.c     \
			my/my_putstr.c     \
			my/my_strlen.c     \
			my/my_putchar.c     \
			my/my_put_nbr.c     \
			my/my_getnbr.c     \
			my/nb_neg.c     \
			my/my_strlentab.c     \
			my/my_str_isnum.c     \
			my/my_revstr.c      \
			my/my_showmem.c     \
			my/my_str_isupper.c      \
			my/my_compute_power_rec.c     \
			my/my_showstr.c     \
			my/my_compute_square_root.c     \
			my/my_sort_int_array.c     \
			my/my_str_to_word_array.c     \
			my/my_show_word_array.c     \
			my/my_strlowcase.c     \
			my/my_find_prime_sup.c     \
			my/my_strcapitalize.c     \
			my/my_strncat.c     \
			my/my_strcat.c     \
			my/my_strncmp.c     \
			my/my_isneg.c     \
			my/my_strcmp.c     \
			my/my_strncpy.c     \
			my/my_strcpy.c     \
			my/my_strstr.c     \
			my/my_putchar.c     \
			my/my_str_isalpha.c     \
			my/my_strupcase.c     \
			my/my_str_islower.c     \
			my/my_swap.c     \
			my/my_strdup.c

OBJ    =    $(SRC:.c=.o)

NAME    =    libmy.a

CFLAGS    =    -I../include -L -lmy

OBJ_TESTS	=	tests/tests_my_printf.c

all:	$(NAME) clean

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

tests_run: $(NAME) clean
	gcc -o unit_tests $(SRC) $(OBJ_TESTS) $(CFLAGS) --coverage -lcriterion
	./unit_tests

re:	fclean all

.PHONY: all clean fclean tests_run re

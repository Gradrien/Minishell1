##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## compile
##

SRC    =    main.c \
			src/linked_env.c \
			src/signal_error.c \
			src/commands.c \
			src/utils/str_to_tab_path.c \
			src/utils/str_is_alpha_shell.c \
			src/builtins/my_env.c \
			src/builtins/my_setenv.c \
			src/builtins/my_unsetenv.c \
			src/builtins/exec_binaries.c \
			src/builtins/my_exit.c \
			src/builtins/my_cd.c

OBJ    =    $(SRC:.c=.o)

NAME    =    mysh

CFLAGS = -I./include -L lib/ -lmy

LDFLAGS = --coverage -lcriterion

all:	$(NAME)

$(NAME):	$(OBJ)
	make -C lib/
	$(CC) -o $(NAME) $(OBJ) $(CFLAGS)

debug: $(NAME)
	make -C lib/
	gcc -o $(NAME) $(OBJ) $(CFLAGS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -f lib/*.a

tests_run: $(NAME) clean
	$(CC) -o unit_tests $(SRC_TEST) $(OBJ_TESTS) $(CFLAGS) $(LDFLAGS)
	./unit_tests

re:	fclean all

.PHONY: all clean fclean unit_tests run_tests re

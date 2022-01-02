CC = cc -c

CFLAGS = -Wall -Werror -Wextra

SRCS = push_swap.c \
ft_atoi.c \
ft_isdigit.c \
ft_check_dup.c \
ft_check_input.c \
ft_check_if_sorted.c \
ft_fill.c \
ft_free_list.c \
ft_index.c \
ft_is_empty.c \
ft_isalpha.c \
ft_isdigit_imp.c \
ft_less.c \
ft_LiLHak_sort.c \
ft_list_size.c \
ft_lstlast.c \
ft_printlist.c \
ft_push.c \
ft_push_a.c \
ft_push_b.c \
ft_push_back.c \
ft_radix.c \
ft_reverse_rotate_b.c \
ft_reverse_rotate_a.c \
ft_rotate_a.c \
ft_rotate_b.c \
ft_rr.c \
ft_rrr.c \
ft_ss.c \
ft_strcmp.c \
ft_strstr.c \
ft_swap_a.c \
ft_swap_b.c \
ft_send_to_a.c \
ft_find_big_digit.c \
ft_get_min.c \
ft_get_min_index.c \
ft_small_handl.c \
ft_bigech_handl.c \
ft_sort_separ.c \

CHECKER_SRCS = bonus_checker.c \
ft_checker_main.c \
ft_push_a_checker.c \
ft_push_b_checker.c \
ft_reverse_rotate_a_checker.c \
ft_reverse_rotate_b_checker.c \
ft_rotate_a_checker.c \
ft_rotate_b_checker.c \
ft_rr_checker.c \
ft_rrr_checker.c \
ft_ss_checker.c \
ft_strcmp.c \
ft_strstr.c \
ft_check_dup.c \
ft_swap_a_checker.c \
ft_swap_b_checker.c \
get_next_line.c \
ft_strjoin.c \
ft_strdup.c \
ft_substr.c \
ft_strchr.c \
ft_strlen.c \

OBJS = ${SRCS:.c=.o}
CHECKER_OBJS= ${CHECKER_SRCS:.c=.o}

LIB = push_swap.a

CHECKER_LIB = checker.a

REM = rm -f

ARV = ar -rcs

.c.o :
	${CC} ${CFLAGS} $< -o $@
	${ARV} $(LIB) $@

all : $(LIB)
$(LIB) : $(OBJS)
	cc ${CFLAGS} push_swap.c ${LIB} -o push_swap

checker : $(CHECKER_LIB)
$(CHECKER_LIB) : $(CHECKER_OBJS)
	${CC} ${CFLAGS} ${CHECKER_SRCS} -o ${CHECKER_OBJS}
	cc ${CFLAGS} ft_checker_main.c ${CHECKER_LIB} checker

clean :
	${REM} ${OBJS} push_swap

fclean : clean
	${REM} ${LIB}

re : fclean all

.PHONY : all clean fclean re
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

CHECKER_SRCS = ./checker_utils/bonus_checker.c \
./checker_utils/ft_checker_main.c \
./checker_utils/ft_push_a_checker.c \
./checker_utils/ft_push_b_checker.c \
./checker_utils/ft_reverse_rotate_a_checker.c \
./checker_utils/ft_reverse_rotate_b_checker.c \
./checker_utils/ft_rotate_a_checker.c \
./checker_utils/ft_rotate_b_checker.c \
./checker_utils/ft_rr_checker.c \
./checker_utils/ft_rrr_checker.c \
./checker_utils/ft_ss_checker.c \
./checker_utils/ft_strcmp.c \
./checker_utils/ft_strstr.c \
./checker_utils/ft_swap_a_checker.c \
./checker_utils/ft_swap_b_checker.c \
./checker_utils/get_next_line.c \
./checker_utils/get_next_line_utils.c \
./checker_utils/ft_index_checker.c \
./checker_utils/ft_push_back_checker.c \
./checker_utils/ft_fill_checker.c \
./checker_utils/ft_LiLHak_sort_checker.c \
./checker_utils/ft_list_size_checker.c \
./checker_utils/ft_check_dup_checker.c \
./checker_utils/ft_check_if_sorted_checker.c \
./checker_utils/ft_check_input_checker.c \
./checker_utils/ft_push_checker.c \
./checker_utils/ft_atoi_checker.c \
./checker_utils/ft_is_empty_checker.c \
./checker_utils/ft_isalpha_checker.c \
./checker_utils/ft_isdigit_checker.c \
./checker_utils/ft_isdigit_imp_checker.c \
./checker_utils/ft_lstlast_checker.c

OBJS = ${SRCS:.c=.o}
CHECKER_OBJS= ${CHECKER_SRCS:.c=.o}

LIB = push_swap.a

CHECKER_LIB = checker.a

REM = rm -f

ARV = ar -rcs

.c.o :
	${CC} ${CFLAGS} $< -o $@
	

all : $(LIB)
$(LIB) : $(OBJS)
	${ARV} $(LIB) $(OBJS)
		cc ${CFLAGS} push_swap.c ${LIB} -o push_swap

checker : $(CHECKER_LIB)
$(CHECKER_LIB) : $(CHECKER_OBJS)
	$(ARV) ${CHECKER_LIB} $(CHECKER_OBJS)
		cc ${CFLAGS} ./checker_utils/ft_checker_main.c ${CHECKER_LIB} -o checker

clean :
	${REM} ${OBJS} 

checker_clean :
	${REM} ${CHECKER_OBJS} 

checker_fclean :checker_clean
	${REM} ${CHECKER_LIB} checker

checker_re : checker_fclean checker

fclean : clean
	${REM} ${LIB} push_swap

re : fclean all

.PHONY : all clean fclean re checker checker_fclean checker_clean checker_re
CC = cc -c

CFLAGS = -Wall -Werror -Wextra

SRCS = test.c \
ft_atoi.c \
ft_isdigit.c

OBJS = ${SRCS:.c=.o}

LIB = push_swap.a

REM = rm -f

ARV = ar -rcs

.c.o :
	${CC} ${CFLAGS} $< -o $@
	${ARV} $(LIB) $@

all : $(LIB)
$(LIB) : $(OBJS)
	#cc ${CFLAGS} test.c ${LIB} -o test

clean :
	${REM} ${OBJS} pipex

fclean : clean
	${REM} ${LIB}

re : fclean all

.PHONY : all clean fclean re
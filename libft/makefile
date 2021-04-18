# NAME	= libft.a
# CFLAGS	= -Wall -Wextra -Werror
# CC		= -c
# OBJDIR	= obj
# OBJS	= ${SRCS:.c=.o}
# SRCS	= ft_memset.c, ft_bzero.c, ft_strlen.c



# all:	${NAME}

# clean:
# 	rm	-f ${OBJS}
# ${OBJDIR}/%.o:	%.c
#     ${CC} ${CFLAGS} -c -o $@ $<

# ${NAME}:	${OBJS}

SOURCES = ${wildcard *.c}

libft:
	gcc -Wall -Wextra -Werror -c ${SOURCES}
	ar r libft.a *.o
	rm *.o
clean:
	rm -f ./*.o

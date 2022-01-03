CC =		gcc
NAME =		do-op
SRCS_NAME =	check_args.c \
			ft_atoi.c \
			ft_putnbr.c \
			ft_putstr.c \
			ft_strcmp.c \
			main.c \
			ft_operator.c
SRCS =		$(addprefix $(SRCS_PATH)/, $(SRCS_NAME))
SRCS_PATH =	srcs
INC_NAME =	do_op.h
INC =		$(addprefix $(INC_PATH)/, $(INC_NAME))
INC_PATH =	includes
RM =		rm -rf
OBJ =		$(SRCS:.c=.o)
CFLAG =		-Wall -Wextra -Werror
INCFLAGS =	-I$(INC_PATH)

all :		 $(NAME)

%.o : %.c
			$(CC) $(CFLAG) $(INCFLAGS) -c $< -o $@

$(NAME) : 	$(OBJ) $(INC)
			$(CC) -o $@ $(OBJ)

clean :
			$(RM) $(OBJ)

fclean :	clean
			$(RM) $(NAME)

re : 		fclean all

.PHONY : 	all clean fclean re

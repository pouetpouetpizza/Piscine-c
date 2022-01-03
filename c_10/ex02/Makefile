CC =		gcc
NAME =		ft_tail
SRCS_NAME = fonctions.c \
			ft_tail.c \
			test_arg.c \
			ft_read_stock.c	\
			ft_atoi.c
SRCS =		$(addprefix $(SRCS_PATH)/, $(SRCS_NAME))
SRCS_PATH =	srcs
INC_NAME =	ft_tail.h
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

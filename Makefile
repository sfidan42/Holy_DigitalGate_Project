SRC		=	$(shell ls -t utils/*.c)
OBJ		=	$(SRC:.c=.o)
CFLAGS	=	-Wall -Wextra -Werror
LIBLAGS	=	-lpthread
NAME	=	digital_gate.a

all: $(NAME)

$(NAME):
	make -C utils
	ar rcs $(NAME) $(OBJ)

digital_gate: digital_gate.c
	gcc $(CFLAGS) digital_gate.c $(NAME) $(LIBLAGS) -o digital_gate

clean:
	@make -C utils clean
	rm -f $(OBJ)

fclean: clean 
	rm -f $(NAME) digital_gate

re: fclean all

.PHONY: all clean fclean re
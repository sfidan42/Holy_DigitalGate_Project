SRC		=	$(shell ls -t utils/*.c utils/utils_help/*.c)
OBJ		=	$(SRC:.c=.o)
CFLAGS	=	-Wall -Wextra -Werror
NAME	=	digital_gate.a

all: $(NAME) digital_gate

$(NAME):
	make -C utils
	ar rcs $(NAME) $(OBJ)

digital_gate: digital_gate.c
	make -C titles
	gcc $(CFLAGS) digital_gate.c $(NAME) $(LIBLAGS) -o digital_gate

clean:
	@make -C titles clean
	@make -C utils clean
	rm -f $(OBJ)

fclean: clean 
	rm -f $(NAME) digital_gate

re: fclean all

.PHONY: all titles clean fclean re
SRC	=	$(shell ls -t *.c)
CFLAGS	=	-Wall -Wextra -Werror

all:
	gcc -c $(CFLAGS) $(SRC) $(LIBLAGS)

clean:
	rm -f $(SRC:.c=.o)

CFLAGS	=	-Wall -Wextra -Werror
LIBLAGS	=	-lpthread -lreadline
NAME	=	../digital_gate.a

all:	posix_threading \
		posix_signals \
		posix_socket_server posix_socket_client \
		serialization \
		state_machines

posix_threading: posix_threading.c
	gcc $(CFLAGS) posix_threading.c $(NAME) $(LIBLAGS) -o posix_threading

posix_signals: posix_signals.c
	gcc $(CFLAGS) posix_signals.c $(NAME) $(LIBLAGS) -o posix_signals

posix_socket_server: posix_socket_server.c
	gcc $(CFLAGS) posix_socket_server.c $(NAME) $(LIBLAGS) -o posix_socket_server

posix_socket_client: posix_socket_client.c
	gcc $(CFLAGS) posix_socket_client.c $(NAME) $(LIBLAGS) -o posix_socket_client

serialization: serialization.c
	gcc $(CFLAGS) serialization.c $(NAME) $(LIBLAGS) -o serialization

state_machines: state_machines.c
	gcc $(CFLAGS) state_machines.c $(NAME) $(LIBLAGS) -o state_machines

clean:
	rm -f	posix_threading \
			posix_signals \
			posix_socket_server posix_socket_client \
			serialization \
			state_machines

.PHONY: all clean
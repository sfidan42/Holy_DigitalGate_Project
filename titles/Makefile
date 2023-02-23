CFLAGS	=	-Wall -Wextra -Werror
LIBLAGS	=	-lpthread -lreadline

all:
	gcc $(CFLAGS) posix_threading.c $(LIBLAGS) -o posix_threading
	gcc $(CFLAGS) posix_signals.c $(LIBLAGS) -o posix_signals
	gcc $(CFLAGS) posix_socket.c $(LIBLAGS) -o posix_socket
	gcc $(CFLAGS) serialization.c $(LIBLAGS) -o serialization
	gcc $(CFLAGS) state_machines.c $(LIBLAGS) -o state_machines

clean:
	rm -f posix_threading posix_signals posix_socket serialization state_machines

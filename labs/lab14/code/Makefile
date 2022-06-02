all: server client server-new client-new

server: server.c common.h
	gcc server.c -o server

client: client.c common.h
	gcc client.c -o client

server-new: server-new.c common.h
	gcc server-new.c -o server-new


client-new: client-new.c common.h
	gcc client-new.c -o client-new


clean:
	-rm server client server-new client-new *.o
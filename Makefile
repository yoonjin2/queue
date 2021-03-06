CC=gcc
CFLAGS=-g -Wall
TARGET=queue
OBJS= front_rear.o size.o pop.o push.o init_queue.o empty_queue.o main.o task.o queue.o
$(TARGET):	$(OBJS)
	$(CC) -o $@ $(OBJS)

init_queue.o:	init_queue.c
	$(CC) -c -o init_queue.o init_queue.c 

front_rear.o:	front_rear.c
	$(CC) -c -o front_rear.o front_rear.c

size.o:	size.c
	$(CC) -c -o size.o size.c

pop.o: pop.c
	$(CC) -c -o pop.o pop.c

push.o:	push.c
	$(CC) -c -o push.o push.c
empty_queue.o:	empty_queue.c
	$(CC) -c -o empty_queue.o empty_queue.c
queue.o:	queue.c
	$(CC) -c -o queue.o queue.c

task.o:	task.c
	$(CC) -c -o task.o task.c

main.o:	main.c
	$(CC) -c -o main.o main.c
back.o:	front_rear.c
	$(CC) -c -o front_rear.o front_rear.c
clean:
	rm $(OBJECT) $(TARGET)

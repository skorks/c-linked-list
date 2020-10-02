# CC=gcc
# CFLAGS=-Wall
# EXECUTABLE=list
# list: linkedlist.o main.c
# 	$(CC) $(CFLAGS) linkedlist.o main.c -o $(EXECUTABLE)
# linkedlist.o: linkedlist.h 
# clean:
# 	rm -rf *.o *.gch $(EXECUTABLE)
# leaks:
# 	valgrind --leak-check=yes ./$(EXECUTABLE)

CC=gcc
CFLAGS=-Wall
EXECUTABLE=list

%.o: %.c
	$(CC) $(CFLAGS) -c $<

list: linkedlist.o main.o
	$(CC) $(CFLAGS) linkedlist.o main.o -o $@

# linkedlist.o: linkedlist.h 

clean:
	rm -rf *.o $(EXECUTABLE)
leaks:
	valgrind --leak-check=yes ./$(EXECUTABLE)
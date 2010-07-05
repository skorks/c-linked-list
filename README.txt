compiling:
  gcc -Wall -o list linked_list.c 
checking for memory leaks:
  valgrind --leak-check=yes ./list

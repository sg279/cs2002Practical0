all: clean stage1 stage2

clean:
	rm *.o

stage1: print_pell.o recursive_pell.o
	gcc print_pell.o recursive_pell.o -o stage1

stage2: print_pell.o iterative_pell.o
	gcc print_pell.o iterative_pell.o -o stage2

stage3: second_main.o personalised_pell.o
	gcc second_main.o personalised_pell.o -o stage3

recursive_pell.o: recursive_pell.c header.h
	gcc recursive_pell.c -c -o recursive_pell.o -Wall -Wextra -g

iterative_pell.o: iterative_pell.c header.h
	gcc iterative_pell.c -c -o iterative_pell.o -Wall -Wextra -g

personalised_pell.o: personalised_pell.c header.h
	gcc personalised_pell.c -c -o personalised_pell.o -Wall -Wextra -g

print_pell.o: print_pell.c header.h
	gcc print_pell.c -c -o print_pell.o -Wall -Wextra -g

second_main.o: second_main.c header.h
	gcc second_main.c -c -o second_main.o -Wall -Wextra -g

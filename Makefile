main: main.c
	gcc -Wall -I/usr/local/include -c main.c
	gcc -L/usr/local/lib main.o -lgsl -lgslcblas -lm

clean:
	rm main.o a.out

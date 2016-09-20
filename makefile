compile:
	clear
	gcc main.c umabiblioteca.c -O3 -0 tp2

executa:
	./tp2

clean:
	rm -r tp2 *.o

# Output:

	$ make clean; make
	rm -f bar *.o
	gcc -std=c11 -Wall -c -o foo.o foo.c
	Symbols in foo.o:
	00000000 t foo_add
	0000000d T foo_neg
	00000017 T foo_sub

	gcc -std=c11 -Wall -c -o bar.o bar.c
	Symbols in bar.o:
	00000000 t foo_add
			 U foo_sub
	0000000d T main
			 U printf

	gcc -std=c11 -Wall -o bar foo.o bar.o
	Symbols in bar:
	0804841d t foo_add
	08048456 t foo_add
	0804842a T foo_neg
	08048434 T foo_sub

CC=gcc -std=c11 -Wall

%.o: %.c
	$(CC) -c -o $@ $^
	@echo Symbols in $@:
	@nm $@
	@echo

bar: foo.o bar.o
	$(CC) -o $@ $^
	@echo Symbols in $@:
	@nm $@ | grep \ foo_

clean:
	rm -f bar *.o

all: add-two-numbers

add-two-numbers: bin
	gcc -std=c99 -lm -o bin/add-two-numbers add-two-numbers.c

test: add-two-numbers
	bin/add-two-numbers

bin:
	mkdir -p bin

clean:
	rm -rf bin

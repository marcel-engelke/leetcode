all: two-sum

two-sum: bin
	gcc -std=c99 -lm -o bin/two-sum two-sum.c

test: two-sum
	bin/two-sum

bin:
	mkdir -p bin

clean:
	rm -rf bin

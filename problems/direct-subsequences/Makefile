all: direct-subsequences

direct-subsequences: bin
	gcc -std=c99 -lm -o bin/direct-subsequences direct-subsequences.c

test: direct-subsequences
	./bin/direct-subsequences

bin:
	mkdir -p bin

clean:
	rm -rf bin

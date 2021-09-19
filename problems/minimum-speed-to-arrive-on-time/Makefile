all: minimum-speed-to-arrive

minimum-speed-to-arrive: bin
	gcc -std=c99 -lm -o bin/minimum-speed-to-arrive minimum-speed-to-arrive.c

test: minimum-speed-to-arrive
	bin/minimum-speed-to-arrive

bin:
	mkdir -p bin

clean:
	rm -rf bin

.PHONY: clean test bin
bin/convert: obj/main.o obj/algorythm.o obj/input.o
	gcc -o bin/convert obj/main.o obj/algorythm.o obj/input.o

obj/main.o: src/main.c
	gcc -c -o obj/main.o  src/main.c

obj/algorythm.o: src/algorythm.c
	gcc -c -o obj/algorythm.o src/algorythm.c

obj/input.o: src/input.c
	gcc -c -o obj/input.o src/input.c

bin/test: obj/algorythm.o  obj/ctest.o obj/algo_test.o obj/input.o
	gcc -Wall -o bin/test obj/ctest.o obj/algorythm.o obj/algo_test.o obj/input.o

obj/ctest.o: Tests/ctest.c
	gcc -Wall -c Tests/ctest.c -o obj/ctest.o -Ithirdparty

obj/algo_test.o: Tests/algo_test.c
	gcc -Wall -c Tests/algo_test.c -o obj/algo_test.o -Ithirdparty -Isrc

bin: bin/convert

test: bin/test

clean:
	rm -f bin/* obj/*.o

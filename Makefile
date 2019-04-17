# Build for Memos class "Rename Method" refactoring
.PHONY: all
all : Memos

Memos : Memos.o
	g++ -std=c++11 Memos.o -o Memos

Memos.o : Memos.cpp
	g++ -std=c++11 -c Memos.cpp

.PHONY: clean
clean :
	rm -f Memos.o Memos

.PHONY: run
run : Memos
	./Memos

.PHONY: test
test : Memos
	./Memos

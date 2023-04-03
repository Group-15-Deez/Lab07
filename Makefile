# Make file connecting all the files under make.
all: main.out

run: main.out
	./main.out

main.out: main.cpp DivSales.cpp
	g++ main.cpp DivSales.cpp -o main.out

clean: rm *.out
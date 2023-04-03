default: main.out

main.out: EncryptableString.cpp main.cpp
	g++ -Wall EncryptableString.cpp main.cpp -o main.out

run:
	./main.out

clean:
	rm -f main.out
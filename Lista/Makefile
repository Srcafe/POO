all: main.cpp questao1.o questao2.o questao3.o questao4.o
	g++ -o main main.cpp questao1.o questao2.o questao3.o questao4.o
main.o: main.cpp
	g++ -o main.o -c main.cpp
questao1.o: questao1.cpp
	g++ -o questao1.o -c questao1.cpp
questao2.o: questao2.cpp
	g++ -o questao2.o -c questao2.cpp
questao3.o: questao3.cpp
	g++ -o questao3.o -c questao3.cpp
questao4.o: questao4.cpp
	g++ -o questao4.o -c questao4.cpp

clear:
	rm -f *.o main	
run:
	./main 
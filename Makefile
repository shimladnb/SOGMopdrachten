all: telop list

telop: functie1.cpp
	g++ -c functie1.cpp
	g++ -o functie1 functie1.o

list: functie2.cpp
	g++ -c functie2.cpp
	g++ -o list functie2.o


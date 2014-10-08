all: telop list sinus roteer

telop: functie1.cpp
	g++ -c functie1.cpp
	g++ -o functie1 functie1.o

list: functie2.cpp
	g++ -c functie2.cpp
	g++ -o list functie2.o

sinus: sinus.cpp
	g++ -c sinus.cpp
	g++ -o sinus sinus.o

roteer: functie3.cpp
	g++ -c functie3.cpp
	g++ -o roteer functie3.o
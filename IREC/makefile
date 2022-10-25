derlecalistir:program 

program:Main.o canta.o
	g++ ./lib/main.o ./lib/canta.o -o ./bin/program
canta.o:
	g++ -I "./include" -c ./src/canta.cpp -o ./lib/canta.o
Main.o:
	g++ -I "./include" -c ./src/main.cpp -o ./lib/main.o
calistir:
	./bin/program.exe
main.out: main.o loopshw.o
	g++ -Wall -g main.o loopshw.o -o main.out

main.o: main.cpp
	g++ -c -Wall -g main.cpp

loopshw.o: loopshw.cpp
	g++ -c -Wall -g loopshw.cpp

grade:
	sh grademyprogram.sh

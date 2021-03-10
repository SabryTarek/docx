Makefile
===



taget: dependancy files
    action

output: main.o class.o
    g++ main.o class.o -o output && ./output

main.o: main.cpp
    g++ -c main.cpp

main.o: class.cpp class.h
    g++ -c class.cpp


clean:
    rm *.o output


make
make clean



examples:

<<<<<<< HEAD
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
=======
Makefile
===



taget: dependancy files
    action/rule

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
>>>>>>> 4af8c228a1e5f92e035f488b94443d6c889500e6

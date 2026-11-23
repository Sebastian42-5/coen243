registration.exe: Student.o Course.o main.o
	g++ Student.o Course.o main.o -o registration.exe

Student.o: Student.cpp Student.h
	g++ -c Student.cpp

Course.o: Course.cpp Course.h Student.h
	g++ -c Course.cpp

main.o: main.cpp Course.h Student.h
	g++ -c main.cpp
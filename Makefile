all:
	g++ src/main.cpp -o student-portal

run: all
	./student-portal
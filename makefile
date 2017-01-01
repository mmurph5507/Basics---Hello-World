all: basics-helloworld.exe

clean:
	rm main.o basics-helloworld.exe

basics-helloworld.exe: main.o
	g++ -g -o basics-helloworld main.o

main.o:
	g++ -c -g main.cpp
CC=clang

default:
	clang -c not_class.c
	clang -c main.c
	clang not_class.o main.o -o a.exe
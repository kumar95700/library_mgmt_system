main_app.exe:main_app.o
	gcc main_app.o -o main_app.exe

main_app1.o:main_app1.c
	gcc -g -c main_app1.c -o main_app1.o

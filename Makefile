add: add-nbo

add-nbo: add-nbo.o
			gcc add-nbo.o -o add-nbo

add-nbo.o: add-nbo.cpp
			gcc -c add-nbo.c -o add-nbo.o

clean:
			rm -rf *.o add-nbo

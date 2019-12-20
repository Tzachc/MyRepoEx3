all:txtfind isort
main.o: main.c
	gcc -Wall -fPIC -c main.c
find.o: find.c find.h
	gcc -Wall -fPIC -c find.c
txtfind: main.o find.o find.h
	gcc -Wall -fPIC -o txtfind main.o find.o
insertion.o: insertion.c insertion.h
	gcc -Wall -fPIC -c insertion.c
mainSort.o: mainSort.c
	gcc -Wall -fPIC -c mainSort.c
isort: mainSort.o insertion.o insertion.h
	gcc -Wall -fPIC -o isort mainSort.o insertion.o
clean:
	rm -f *.o *.a txtfind isort
.PHONEY: clean all



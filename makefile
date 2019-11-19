CC = gcc
AR = ar
OBJECTS_MAIN = main.o
OBJECTS_LIB = basicMath.o power.o
FLAGS = -Wall -g

all: mymaths mymathd mains maind

mymaths: libmyMath.a
libmyMath.a: $(OBJECTS_LIB)
	$(AR) -rcs libmyMath.a $(OBJECTS_LIB)
mymathd: libmyMath.so
libmyMath.so: $(OBJECTS_LIB)
	$(CC) -shared -o libmyMath.so $(OBJECTS_LIB)
mains: $(OBJECTS_MAIN) libmyMath.a
	$(CC) $(FLAGS) -o mains $(OBJECTS_MAIN) libmyMath.a
maind: $(OBJECTS_MAIN)
	$(CC) $(FLAGS) -o maind $(OBJECTS_MAIN) ./libmyMath.so
power.o: power.c myMath.h
	$(CC) $(FLAGS) -fPIC -c power.c
basicMath.o: basicMath.c myMath.h
	$(CC) $(FLAGS) -fPIC -c basicMath.c
main.o: main.c myMath.h
	$(CC) $(FLAGS) -c main.o


.PHONY: clean all mymaths mymathd

clean:
	rm -f *.o *.a *.so mains maind
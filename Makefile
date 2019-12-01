CC=gcc
AR=ar
OBJECTS_MAIN=main.o
OBJECTS_LIB=myBank.o myBank.h
FLAGS= -Wall -fPIC -g



all:mains maind LibmyBank.so LibmyBank.a
mains: $(OBJECTS_MAIN) LibmyBank.a
	$(CC) $(FLAGS) -o mains $(OBJECTS_MAIN) LibmyBank.a
maind:$(OBJECTS_MAIN) LibmyBank.so
	$(CC) $(FLAGS) -o maind $(OBJECTS_MAIN) ./LibmyBank.so
LibmyBank.so:$(OBJECTS_LIB)
	$(CC) -shared -o LibmyBank.so  $(OBJECTS_LIB)
LibmyBank.a:$(OBJECTS_LIB)
	$(AR) -rcs LibmyBank.a $(OBJECTS_LIB)
main.o: main.c myBank.h
	$(CC) $(FLAGS) -c main.c
myBank.o:myBank.c myBank.h
	$(CC) $(FLAGS) -c myBank.c
clean:
	rm -f *.o *.a *.so mains maind

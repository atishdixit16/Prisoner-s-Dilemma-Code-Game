CC=gcc
DEPS=header.h
TARGET=dilemma
OBJS= main_v1.o score.o dummy1.o  group1.o group2.o group3.o group7.o group5.o group6.o 

%.o: %.c $(DEPS)
	$(CC) -o $@ -c $<

$(TARGET): $(OBJS)
	$(CC) -o $@ $^

clean:
	rm *.o

cleanAll:
	rm $(TARGET) *.o

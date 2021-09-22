SRC = mystring.cpp test_mystring.cpp

LIB = -lgtest -lgtest_main -lpthread

all : $(SRC)
	g++ $^ -o $@.out $(LIB)

run:all
	./$^.out

clean:
	rm *.o*

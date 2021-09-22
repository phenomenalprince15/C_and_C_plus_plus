PROJ_NAME = Mystring
SRC = mystring.cpp test_mystring.cpp

#To check if the OS is windows or linux and set the executable file extension and delete command accordingly
ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif

all:
	g++ $(SRC) -o $(call FixPath,$(PROJ_NAME).$(EXEC)) -lgtest -lgtest_main -lpthread

run: all
	./$(call FixPath,$(PROJ_NAME).$(EXEC))

clean:
	$(RM) $(call FixPath,$(PROJ_NAME).$(EXEC))

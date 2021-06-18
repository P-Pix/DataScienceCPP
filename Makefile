SRC		=	main.cpp\
			\
			src/Numcpp/Accessor.cpp\
			src/Numcpp/Constructor.cpp\
			src/Numcpp/IsEqual.cpp\
			src/Numcpp/Sum.cpp\
			src/Numcpp/Zero.cpp\
			\

FILE	=	main.o

cpp:
	@(g++ -o $(FILE) $(SRC))

val:
	@(valgrind g++ -o $(FILE) $(SRC))
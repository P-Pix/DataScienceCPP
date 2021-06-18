SRC		=	main.cpp\
			\
			src/Numcpp/Accessor.cpp\
			src/Numcpp/Constructor.cpp\
			src/Numcpp/PrivateListSum.cpp\
			src/Numcpp/PublicListSum.cpp\
			src/Numcpp/PublicListZero.cpp\
			src/Numcpp/Test.cpp\

FILE	=	main.o

cpp:
	@(g++ -o $(FILE) $(SRC))

val:
	@(valgrind g++ -o $(FILE) $(SRC))
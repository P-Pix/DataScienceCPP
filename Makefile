SRC		=	main.cpp\
			\
			src/Numcpp/Accessor.cpp\
			src/Numcpp/Constructor.cpp\
			src/Numcpp/PublicArray.cpp\
			src/Numcpp/PublicPrinting.cpp\

FILE	=	main.o

cpp:
	@(g++ -o $(FILE) $(SRC))
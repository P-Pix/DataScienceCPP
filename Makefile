NAME	=	main

SRC		=	src/Numcpp/Constructor.cpp\
			src/Numcpp/Accessor.cpp\

FILE	=	main.o

cpp:
	@(g++ -o $(FILE) $(NAME) $(SRC))
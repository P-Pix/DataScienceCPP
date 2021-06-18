MODULE	=	-lsfml-window\
			-lsfml-system\
			-lsfml-graphics\

SRC		=	main.cpp\
			\
			src/Numcpp/Accessor.cpp\
			src/Numcpp/Constructor.cpp\
			src/Numcpp/Equal.cpp\
			src/Numcpp/Inferior.cpp\
			src/Numcpp/InferiorOrEqual.cpp\
			src/Numcpp/Max.cpp\
			src/Numcpp/Min.cpp\
			src/Numcpp/Mult.cpp\
			src/Numcpp/Sub.cpp\
			src/Numcpp/Sum.cpp\
			src/Numcpp/Superior.cpp\
			src/Numcpp/SuperiorOrEqual.cpp\
			src/Numcpp/Zero.cpp\
			\
			src/Pltcpp/Accessor.cpp\
			src/Pltcpp/Constructor.cpp\
			src/Pltcpp/Control.cpp\
			src/Pltcpp/Coord2D.cpp\
			src/Pltcpp/Draw.cpp\
			src/Pltcpp/Line.cpp\
			\

FILE	=	main.o

cpp:
	@(g++ -o $(FILE) $(SRC) $(MODULE))

val:
	@(valgrind g++ -o $(FILE) $(SRC) $(MODULE))
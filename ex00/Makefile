NAME		= ex00
C++FLAGS	= -Wall -Wextra -Werror -std=c++98 -pedantic
RM			= rm -rf

OBJ			= $(SRC:.cpp=.o)

SRC =	main.cpp \
		Animal.cpp \
		WrongAnimal.cpp \
		Cat.cpp \
		Dog.cpp \
		WrongCat.cpp \
		WrongDog.cpp \

HEADER =	Animal.hpp \
			WrongAnimal.hpp \
			Cat.hpp \
			Dog.hpp \
			WrongCat.hpp \
			WrongDog.hpp \

all:	$(NAME)

%.o : %.cpp $(HEADER)
	g++ -c -o $@ $< $(C++FLAGS)
	
$(NAME):	$(OBJ) 
			g++ $(C++FLAGS) -o $(NAME) $(OBJ)


clean:
			$(RM) $(OBJ)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re

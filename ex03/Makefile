NAME = ex03
CC = c++
CFLAGS = -std=c++17 -Wall -Wextra -Werror
SRCS = main.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp IMateriaSource.cpp ICharacter.cpp AMateria.cpp main.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
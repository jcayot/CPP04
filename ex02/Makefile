NAME = usefullDestructor
CC = c++
CFLAGS = -std=c++17 -Wall -Wextra -Werror
SRCS = Brain.cpp WrongCat.cpp WrongAnimal.cpp Cat.cpp Dog.cpp Animal.cpp main.cpp
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
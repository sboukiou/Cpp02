CPP=c++
CFLAGS=-Wall -Werror -Wextra -std=c++98

SRC=main.cpp Fixed.cpp
NAME=Fixed

OBJS=$(SRC:%.cpp=%.o)

%.o:%.c
	$(CPP) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	$(CPP) $(CFLAGS) $(OBJS) -o $(NAME)

clean: 
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

NAME= megaphone
CC = clang++
FLAGS = -Wall -Werror -Wextra
SRCS = megaphone.cpp
all: $(NAME)
$(NAME): $(SRCS)
	$(CC) $(FLAGS) $(SRCS) -o $(NAME) 
clean:
	@rm -rf $(NAME)
re: clean
	$(CC) $(FLAGS) $(SRCS) -o $(NAME) 
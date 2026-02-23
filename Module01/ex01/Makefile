# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adruz-to <adruz-to@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/01 20:19:31 by adruz-to          #+#    #+#              #
#    Updated: 2026/02/04 18:24:32 by adruz-to         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Program name
NAME = zombieHorde

# Compiler and flags
CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

# Source files and Objects files
SRC = main.cpp Zombie.cpp zombieHorde.cpp
OBJ_DIR = obj
OBJ = $(addprefix $(OBJ_DIR)/, $(SRC:.cpp=.o))
RM = rm -f

# Rules
all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

$(OBJ_DIR)/%.o: %.cpp | $(OBJ_DIR)
	$(CC) $(CPPFLAGS) -c $< -o $@

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

clean:
	$(RM) -r $(OBJ_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: clean fclean re all

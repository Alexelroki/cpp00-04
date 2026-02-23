# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adruz-to <adruz-to@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/18 12:08:51 by adruz-to          #+#    #+#              #
#    Updated: 2026/01/19 16:03:59 by adruz-to         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Program name
NAME = account

# Compiler and flags
CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

# Source files and Objects files
SRC = Account.cpp tests.cpp
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

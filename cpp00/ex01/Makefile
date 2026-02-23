# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adruz-to <adruz-to@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/16 09:50:33 by adruz-to          #+#    #+#              #
#    Updated: 2026/01/17 19:19:02 by adruz-to         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Program name
NAME = myphonebook

# Compiler and flags
CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
INC = -I includes

# Directories
SRC_DIR = src
OBJ_DIR = obj
INC_DIR = includes

# Source files and Objects files
SRC = main.cpp PhoneBook.cpp Contact.cpp
SRC_FILE = $(addprefix $(SRC_DIR)/, $(SRC))

OBJ = $(addprefix $(OBJ_DIR)/, $(SRC:.cpp=.o))
RM = rm -f

# Rules
all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp | $(OBJ_DIR)
	$(CC) $(CPPFLAGS) $(INC) -c $< -o $@

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

clean:
	$(RM) -r $(OBJ_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: clean fclean re all


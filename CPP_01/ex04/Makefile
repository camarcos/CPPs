# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: carolinamc <carolinamc@student.42.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/03/30 10:44:04 by carolinamc        #+#    #+#              #
#    Updated: 2026/03/31 12:32:31 by carolinamc       ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

################################################################################
# COMPILER OPTIONS
################################################################################

NAME		=	SedIsForLosers
CXX			=	c++
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98
RM			=	rm -rf

# COLORS
RED		=		\033[91;1m
GREEN	=		\033[92;1m
YELLOW	=		\033[93;1m
BLUE	=		\033[94;1m
PINK	=		\033[95;1m
CLEAR	=		\033[0m

################################################################################
# SOURCE FILES
################################################################################

# SOURCE
SRC			=	main.cpp \
				File.cpp \

# OBJECTS
OBJ_DIR		=	objs/
OBJ_FILES	=	$(SRC:%.cpp=$(OBJ_DIR)%.o)

################################################################################
# MAKEFILE RULES
################################################################################

all:	$(NAME)

$(NAME): $(OBJ_FILES)
	@echo "$(BLUE)Compiling $(NAME)...$(CLEAR)"
	$(CC) $(OBJ_FILES) -o $(NAME)
	@echo "$(GREEN)[$(NAME) --> OK]$(CLEAR)"

$(OBJ_DIR)%.o: %.cpp
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@echo "$(BLUE)Removing compiled files...$(CLEAR)"
	$(RM) $(OBJ_DIR)
	@echo "$(GREEN)Object files removed correctly$(CLEAR)"

fclean: clean
	@echo "$(BLUE)Removing binary files...$(CLEAR)"
	$(RM) $(NAME)
	@echo "$(GREEN)Object files and binary removed correctly$(CLEAR)"

re: fclean all

.PHONY:	all clean fclean re

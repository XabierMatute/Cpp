# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/02 14:37:14 by xmatute-          #+#    #+#              #
#    Updated: 2023/06/29 17:00:45 by xmatute-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

define ASCIIART
44  44
44  44
444444
    44
    44

222222
     2
222222
2
222222
endef
export ASCIIART

NAME := ScalarConverter

SRC :=	main.cpp	\

OBJ := $(SRC:%.cpp=%.o)

# HEADER := $(NAME:%=%.hpp)

# INTERFACES := 

CLASSES := ScalarConverter

CLASSES_SRC := $(CLASSES:%=%.cpp)

CLASSES_OBJ := $(CLASSES:%=%.o)

CLASSES_HEADER := $(CLASSES:%=%.hpp) $(INTERFACES:%=%.hpp)

CXX		:=	c++

CPPFLAGS:=	-Wall -Wextra -Werror -std=c++98 -pedantic

SANI 	:= -fsanitize=address -g3

CPPFLAGS:= $(CPPFLAGS) $(EFLAGS)

RM 		:= rm -rf

WHITE = \033[0;37m
RED = \033[0;31m
CYAN = \033[0;36m
GREEN = \033[0;32m
MAGENTA = \033[0;35m

all : $(NAME)

$(NAME): $(CLASSES_OBJ) $(OBJ)
	$(CXX) $(CPPFLAGS) $(OBJ) $(CLASSES_OBJ) -o $(NAME)
	@echo "$(GREEN)$(NAME) compiled...$(WHITE)"
	@echo "$(MAGENTA)$$ASCIIART$(WHITE)"

$(OBJ):%.o: %.cpp $(HEADER) $(HEADERS) $(CLASSES_OBJ)
	@echo "compilando $<..."
	$(CXX) $(CPPFLAGS) -c $< -o $@
	@echo "$@ compilado!"


$(CLASSES_OBJ): %.o: %.cpp $(HEADERS) $(CLASSES_HEADER)
	@echo "compilando $<..."
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -c $< -o $@
	@echo "$@ compilado!"
	
clean : 
	$(RM) $(OBJ) $(CLASSES_OBJ)
	@echo "$(RED)clean done...$(WHITE)"

fclean : clean
		$(RM) $(NAME)
		@echo "$(RED)fclean done...$(WHITE)"

re : fclean all

sani:
	$(MAKE) EFLAGS='$(SANI)' all

flagless:
	$(MAKE) CPPFLAGS='' all

commit:
	git add $(SRC) $(CLASSES_SRC) $(CLASSES_HEADER) $(HEADER) $(HEADERS)  ./Makefile
	git commit -m "commit general de $(NAME)"
	git push
	git status

test: all
	./$(NAME) 0
	./$(NAME) 0.0f
	./$(NAME) 0.0
	./$(NAME) inf
	./$(NAME) +inf
	./$(NAME) -inf
	./$(NAME) nan
	./$(NAME) inff
	./$(NAME) +inff
	./$(NAME) -inff
	./$(NAME) nanf
	./$(NAME) x
	./$(NAME) nan
	./$(NAME) 42.0f
	./$(NAME) -42.69f
	./$(NAME) 1000000000000000000000.69
	./$(NAME) 10000000000000000000004242424224224422424242424.69
	./$(NAME) 69.420


.PHONY : all clean fclean re sani flagless normi commit test
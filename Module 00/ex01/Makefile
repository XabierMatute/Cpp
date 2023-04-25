# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/23 13:40:51 by xmatute-          #+#    #+#              #
#    Updated: 2023/04/25 19:05:07 by xmatute-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

define ASCIIART
     ,'"".
     )  ,|
    /  /,'-.
   /  //  /.`.
 ,'  //  /  `.`.
(    )--.`.   //|
|`--'|   `.`.// |
 `--'      `./  /
   |         | /
   |_________|/                                                                  
endef
export ASCIIART

NAME := agenda

SRC :=	agenda.cpp	\

OBJ := $(SRC:%.cpp=%.o)

CLASSES := Contact PhoneBook

CLASSES_SRC := $(CLASSES:%=%.cpp)

CLASSES_OBJ := $(CLASSES:%=%.o)

CLASSES_HEADER := $(CLASSES:%=%.hpp)

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

$(NAME): $(OBJ)
	@echo "compilando..."
	$(CXX) $(CPPFLAGS) $(OBJ) $(CLASSES_OBJ) -o $(NAME)
	@echo "$(GREEN)$(NAME) compiled...$(WHITE)"
	@echo "$(MAGENTA)$$ASCIIART$(WHITE)"

$(OBJ):%.o: %.cpp $(HEADER) $(CLASSES_OBJ)
	@echo "compilando $<..."
	$(CXX) $(CPPFLAGS) -c $< -o $@
	@echo "$@ compilado!"


$(CLASSES_OBJ): %.o: %.cpp $(CLASSES_HEADER)
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
	git add $(SRC) $(CLASSES_SRC) $(CLASSES_HEADER) $(HEADER) ./Makefile
	git commit -m "commit general"
	git push
	git status

test: all
	./agenda

.PHONY : all clean fclean re sani flagless normi commit test
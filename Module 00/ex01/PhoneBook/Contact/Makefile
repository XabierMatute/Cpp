# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/16 14:39:35 by xmatute-          #+#    #+#              #
#    Updated: 2023/04/18 20:18:07 by xmatute-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CLASS := Contact

NAME := $(CLASS).a

SRC :=	print.cpp	\
		autofill.cpp userfill.cpp\

OBJ := $(SRC:%.cpp=%.o)

HEADER := $(CLASS).hpp

CXX		:=	c++

CPPFLAGS:=	-Wall -Wextra -Werror -std=c++98 -pedantic

SANI 	:= -fsanitize=address -g3

CPPFLAGS:= $(CPPFLAGS) $(EFLAGS)

AR		:= ar rcs

RM 		:= rm -rf

WHITE = \033[0;37m
RED = \033[0;31m
CYAN = \033[0;36m
GREEN = \033[0;32m
MAGENTA = \033[0;35m

all : $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ) $(HEADER)
	@echo "$(GREEN)$(NAME) compiled...$(WHITE)"

%.o: %.cpp $(HEADER)
	$(CXX) $(CPPFLAGS) -c $< -o $@

clean : 
	$(RM) $(OBJ)
	@echo "$(CYAN)$(NAME): $(RED)clean done...$(WHITE)"

fclean : clean
		$(RM) $(NAME)
		@echo "$(CYAN)$(NAME): $(RED)fclean done...$(WHITE)"

re : fclean all

sani:
	$(MAKE) EFLAGS='$(SANI)' all

flagless:
	$(MAKE) CPPFLAGS='' all

commit:
	git add $(SRC) $(HEADER) ./Makefile
	git commit -m "commit general de $(NAME)"
	git push
	git status

test: all
	$(CXX) $(CPPFLAGS) test.cpp $(NAME) ; ./a.out

.PHONY : all clean fclean re sani flagless normi commit
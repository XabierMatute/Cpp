# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/16 14:39:35 by xmatute-          #+#    #+#              #
#    Updated: 2023/04/20 13:03:55 by xmatute-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CLASS := PhoneBook

NAME := $(CLASS).a

SRC :=	add.cpp		\
		display.cpp	\
		search.cpp 	\


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

$(NAME): $(OBJ) ./Contact/Contact.a
	$(AR) $(NAME) $(OBJ) $(HEADER) ./Contact/Contact.a
	ar t $(NAME)
	@echo "$(GREEN)$(NAME) compiled...$(WHITE)"

./Contact/Contact.a:
	$(MAKE) -C Contact

# add.o: add.cpp ./Contact/Contact.a
# 	$(CXX) $(CPPFLAGS) -c add.cpp ./Contact/Contact.a -o add.o

%.o: %.cpp $(HEADER)
	$(CXX) $(CPPFLAGS) -c $< -o $@

clean : 
	$(RM) $(OBJ)
	$(MAKE) fclean -C Contact
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

test: test.out
	./test.out

test.out: all
	$(CXX) $(CPPFLAGS) $(NAME) ./Contact/Contact.a test.cpp $(NAME) -o test.out

.PHONY : all clean fclean re sani flagless normi commit
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/14 16:24:46 by xmatute-          #+#    #+#              #
#    Updated: 2023/04/27 17:19:22 by xmatute-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

define ASCIIART
░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
░░░░░░░░░░░░░░░░░░              ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
░░░░░░░░░░░░                        ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
░░░░░░░░                              ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
░░░░░░        ░░▒▒▒▒▒▒  ░░  ░░          ░░░░░░░░░░░░░░░░░░░░░░░░░░░░
░░░░          ▒▒▒▒░░▒▒▒▒░░░░░░▒▒▓▓▓▓░░    ░░░░░░░░░░░░░░░░░░░░░░░░░░
░░        ░░  ▒▒▒▒░░▒▒▒▒    ▒▒▒▒▒▒▒▒▓▓      ░░░░░░░░░░░░░░░░░░░░░░░░
░░      ░░  ░░  ▒▒▒▒▒▒░░░░  ▓▓▒▒▒▒▓▓▓▓░░    ░░░░░░░░░░░░░░░░░░░░░░░░
        ░░  ░░  ░░░░░░    ░░██▒▒██▒▒██░░      ░░░░░░░░░░░░░░░░░░░░░░
          ░░  ░░░░  ░░░░    ▒▒▓▓▓▓██▓▓        ░░░░░░░░░░░░░░░░░░░░░░
        ░░▓▓▓▓▓▓  ░░░░░░  ░░▒▒▒▒  ▒▒░░░░░░    ░░░░░░░░░░░░░░░░░░░░░░
        ▓▓████▓▓▓▓  ░░  ▒▒▒▒▒▒▒▒░░  ░░  ░░    ░░░░░░░░░░░░░░░░░░░░░░
      ▒▒▓▓▓▓░░██▓▓░░  ░░▒▒▒▒  ▒▒▒▒░░░░░░░░    ░░░░░░░░░░░░░░░░░░░░░░
      ▒▒▒▒██▒▒██▓▓  ░░  ▒▒▒▒▒▒▒▒░░░░          ░░░░░░░░░░░░░░░░░░░░░░
      ░░▓▓▓▓██▓▓▓▓░░░░    ▒▒▒▒▒▒              ░░░░░░░░░░░░░░░░░░░░░░
░░      ░░▓▓▓▓▒▒  ░░  ░░                        ░░░░░░░░░░░░░░░░░░░░
░░                ░░░░                            ░░░░░░░░░░░░░░░░░░
░░░░                                              ░░░░░░░░░░░░░░░░░░
░░░░                                            ░░░░░░░░░░░░░░░░░░░░
░░░░░░                                          ░░░░░░░░░░░░░░░░░░░░
░░░░░░                                        ░░░░░░░░░░░░░░░░░░░░░░
░░░░░░░░                                      ░░░░░░░░░░░░░░░░░░░░░░
░░░░░░░░                                      ░░░░░░░░░░░░░░░░░░░░░░
░░░░░░░░                                    ░░░░░░░░░░░░░░░░░░░░░░░░
░░░░░░░░                                    ░░░░░░░░░░░░░░░░░░░░░░░░
░░░░░░                                        ░░░░░░░░░░░░░░░░░░░░░░
░░░░░░                                    ░░░░░░░░░░░░░░░░░░░░░░░░░░
░░░░░░                            ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
░░░░░░                            ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
░░░░░░                          ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
░░░░░░                          ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
░░░░░░                          ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
                                                              
endef
export ASCIIART

NAME := brain

SRC :=	$(NAME:%=%.cpp)	\

OBJ := $(SRC:%.cpp=%.o)

HEADER := $(NAME:%=%.hpp)

CXX			=	c++

CPPFLAGS	=	-Wall -Wextra -Werror -std=c++98 -pedantic

SANI 	:= -fsanitize=address -g3

CPPFLAGS	:= $(CPPFLAGS) $(EFLAGS)

RM 		:= rm -rf

WHITE = \033[0;37m
RED = \033[0;31m
CYAN = \033[0;36m
GREEN = \033[0;32m
MAGENTA = \033[0;35m

all : $(NAME)

$(NAME): $(SRC)
	$(CXX) $(CPPFLAGS) $(SRC) -o $(NAME)
	@echo "$(GREEN)$(NAME) compiled...$(WHITE)"
	@echo "$(MAGENTA)$$ASCIIART$(WHITE)"
clean : 
	$(RM) $(OBJ)
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
	git add $(SRC) $(HEADER) ./Makefile
	git commit -m "commit general"
	git push
	git status

test: all
	./$(NAME)

.PHONY : all clean fclean re sani flagless normi commit test
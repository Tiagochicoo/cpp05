# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tpereira <tpereira@42Lisboa.com>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/28 12:33:26 by tpereira          #+#    #+#              #
#    Updated: 2023/04/23 09:46:27 by tpereira         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PROG		= bureaucrat
CXX			= g++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98 -g -fsanitize=address
SRCS		= ./srcs/*.cpp
INC			= ./includes

all : $(PROG)

$(PROG) : $(SRCS) $(INC)
	@$(CXX) $(CXXFLAGS) $(SRCS) -I$(INC) -o $(PROG)
	@printf "\e[38;5;46m ╔════════════════════════════════════╗\e[0m\n"
	@printf "\e[38;5;46m█▓▒░	  Compiled Bureaucrat        ░▒▓█ \e[0m\n"
	@printf "\e[38;5;46m ╚════════════════════════════════════╝\e[0m\n"

clean :
	@rm -rf $(PROG) *.dSYM *.out
	@printf "\e[31;5;200m ╔════════════════════════════════════╗\e[0m\n"
	@printf "\e[31;5;200m░▒▓█         Clean complete        █▓▒░\e[0m\n"
	@printf "\e[31;5;200m ╚════════════════════════════════════╝\e[0m\n"

fclean : clean
	@rm -rf $(PROG)

re : fclean all

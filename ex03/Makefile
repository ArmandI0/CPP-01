# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aranger <aranger@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/27 16:48:16 by aranger           #+#    #+#              #
#    Updated: 2024/04/29 13:58:07 by aranger          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP     = c++
CFLAGS  = -Wall -Wextra -Werror -g -std=c++98
NAME    = brain

SRCS    =	\
			main.cpp \
			HumanB.cpp \
			HumanA.cpp \
			Weapon.cpp \

OBJS    = $(SRCS:.cpp=.o)

all     : $(NAME)

.c.o    :
			$(CPP) $(CFLAGS) -c $< -o $(<:.c=.o)
  
$(NAME) :	$(OBJS)
			$(CPP) $(CFLAGS) $(OBJS) -o $(NAME)	
 
clean   :
			rm -f $(OBJS)

fclean  :
			@$(MAKE) clean			
			rm -f $(NAME)

re : fclean $(NAME)

.PHONY  : all clean fclean re
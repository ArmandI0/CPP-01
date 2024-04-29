# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aranger <aranger@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/27 16:48:16 by aranger           #+#    #+#              #
#    Updated: 2024/04/28 15:37:28 by aranger          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP     = c++
CFLAGS  = -Wall -Wextra -Werror -std=c++98
NAME    = zombie

SRCS    =	\
			main.cpp \
			NewZombie.cpp \
			randomChump.cpp \
			Zombie.cpp \
			
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
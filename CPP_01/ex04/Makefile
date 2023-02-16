# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/02 11:54:02 by pcampos-          #+#    #+#              #
#    Updated: 2023/02/14 11:34:25 by pcampos-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

################ PROGRAM ################

NAME	    =    a.out

################ TERMINAL ###############

RMV        =        rm -f
MKD        =        mkdir
PRT        =        printf
MKE        =        make
CPY        =        cp

################# COLORS ################

--GRN    =        \033[32m
--RED    =        \033[31m
--WHT    =        \033[39m

################# DIRS ##################

_SRC    =        ./src/
_OBJ 	=		 ./obj/
_LIB    =

############### COMPILER ################

CC      =        c++
AR      =        ar rcs
CFLAGS  =        -Wall -Werror -Wextra -std=c++98

############### FILES ################

SRCS_   =        main.cpp \
				 

SRCS    =        $(addprefix $(_SRC), $(SRCS_))
OBJS    =        $(patsubst $(_SRC)%.cpp, $(_OBJ)%.o, $(SRCS))

################ RULES ##################

all: $(NAME)

$(_OBJ)%.o: $(_SRC)%.cpp
	$(MKD) -p $(@D)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(_OBJ) $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

############## STRUCTURE ################

$(_OBJ):
	$(MKD) $@

$(_LIB):
	$(MKD) $@

$(_SRC):
	$(MKD) $@

clean:
	$(RMV) $(OBJS)

fclean: clean
	$(RMV) -r $(_OBJ) $(NAME)

re: fclean all

rebonus: fclean bonus

.PHONY: all deps clean fclean re
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anouri <anouri@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/02 13:49:06 by anouri            #+#    #+#              #
#    Updated: 2023/10/02 13:58:56 by anouri           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME= minishell

INCS_DIR	= ./includes/
MAIN_INC	= -I $(INCS_DIR)

LIB_DIR		= ./libft/
LIB_INC		= -I$(LIB_DIR)includes/
LIB_NAME	= $(LIB_DIR)/libft.a

SRCS= main.c \
	prompt.c \
	
# SRCS_BONUS=


OBJS= ${SRCS:.c=.o}$(INCS)

# OBJS_BONUS= ${SRCS_BONUS:.c=.o}

CC= cc

FLAGS= -g3 -Wall -Werror -Wextra -lreadline 

CFLAGS= -g3 -Wall -Werror -Wextra 
RM= rm -f

all: ${NAME}
	
${NAME}: ${OBJS} 
	@make --silent -C $(LIB_DIR)
	${CC} ${FLAGS} ${OBJS} $(LIB_NAME) -L$(LIB_DIR) $(LIB_INC) $(MAIN_INC) -o ${NAME}

# libft:
	# @make --silent -C $(LIB_DIR)

# bonus: ${OBJS_BONUS}
# 	@make --silent -C $(LIB_DIR)
# 	${CC} ${FLAGS} ${OBJS_BONUS} $(LIB_NAME) -L$(LIB_DIR) $(LIB_INC) $(MAIN_INC) -o ${NAME}

clean:
	@$(MAKE) clean --silent -C $(LIB_DIR)
	@$(RM) $(OBJS) #$(OBJS_BONUS)

fclean: clean
	@$(MAKE) fclean --silent -C $(LIB_DIR)
	@$(RM) $(NAME) $(LIB_NAME)


re: fclean all

.PHONY: all clean fclean re
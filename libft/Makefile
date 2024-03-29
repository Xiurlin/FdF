# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: drestrep <drestrep@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/03 00:07:08 by drestrep          #+#    #+#              #
#    Updated: 2024/03/14 16:39:18 by drestrep         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME				=	libft.a

#INCLUDE			=	include/ft_printf include/libft
OBJ_DIR				=	obj/
CC					=	gcc
RM					=	rm -rf
CFLAGS				=	-Wall -Wextra -Werror -I.

LIBFT_DIR			=	src/libft/
LIBFT_SRC			=	ft_isalnum.c			ft_isalpha.c			ft_isascii.c			ft_isdigit.c			\
						ft_isprint.c			ft_memcpy.c				ft_memset.c				ft_strchr.c				\
						ft_strlen.c				ft_strncmp.c			ft_strrchr.c			ft_issign.c				\
						ft_tolower.c			ft_toupper.c			ft_bzero.c				ft_memmove.c			\
						ft_strlcpy.c			ft_memchr.c				ft_memcmp.c				ft_strlcat.c			\
						ft_strnstr.c			ft_atoi.c				ft_calloc.c				ft_strdup.c				\
						ft_substr.c				ft_strjoin.c			ft_strtrim.c			ft_split.c				\
						ft_itoa.c				ft_strmapi.c			ft_striteri.c			ft_putchar_fd.c			\
						ft_putstr_fd.c			ft_putendl_fd.c			ft_putnbr_fd.c			ft_lstnew_bonus.c		\
						ft_lstadd_front_bonus.c	ft_lstsize_bonus.c		ft_lstlast_bonus.c		ft_lstadd_back_bonus.c	\
						ft_lstdelone_bonus.c	ft_lstclear_bonus.c		ft_lstiter_bonus.c		ft_lstmap_bonus.c		\
						ft_get_string.c			ft_atoi_base.c															\

FT_PRINTF_DIR		=	src/ft_printf/
FT_PRINTF_SRC		=	ft_hexadecimal.c		ft_printf.c				ft_putchar.c			ft_putnbr.c				\
						ft_putptr.c				ft_putstr.c				ft_unsigned_int.c

GET_NEXT_LINE_DIR	=	src/get_next_line/
GET_NEXT_LINE_SRC	=	get_next_line.c			get_next_line_utils.c

SRC 				+=	$(addprefix $(LIBFT_DIR), $(LIBFT_SRC))
SRC 				+=	$(addprefix $(FT_PRINTF_DIR), $(FT_PRINTF_SRC))
SRC 				+=	$(addprefix $(GET_NEXT_LINE_DIR), $(GET_NEXT_LINE_SRC))

OBJ					=	$(addprefix $(OBJ_DIR), $(SRC:.c=.o))

all:					$(NAME)

$(NAME):				$(OBJ)
						@ar rcs $(NAME) $(OBJ)
						@echo " "
						@echo "📖📖      📖📖   📖📖📖📖     📖📖📖📖  📖📖📖📖📖"
						@echo "📖📖      📖📖   📖📖  📖📖   📖📖         📖📖"
						@echo "📖📖      📖📖   📖📖📖📖     📖📖📖📖     📖📖"
						@echo "📖📖      📖📖   📖📖  📖📖   📖📖         📖📖"
						@echo "📖📖📖📖  📖📖   📖📖📖📖     📖📖         📖📖"
						@echo " "




# @$(CC) $(CFLAG	S) $(INCLUDE) -c $< -o $@

$(OBJ_DIR)%.o:			$(SRC_DIR)%.c
						@mkdir -p $(dir $@)
						@$(CC) $(CFLAGS) -c $< -o $@

clean:	
						@$(RM) $(OBJ_DIR) $(NAME)
						@echo " "
						@echo "🧹🧹🧹🧹  🧹🧹      🧹🧹🧹🧹     🧹🧹     🧹🧹    🧹🧹  🧹🧹🧹🧹  🧹🧹🧹🧹"
						@echo "🧹🧹      🧹🧹      🧹🧹      🧹🧹  🧹🧹  🧹🧹🧹  🧹🧹  🧹🧹      🧹🧹   🧹  "
						@echo "🧹🧹      🧹🧹      🧹🧹🧹🧹  🧹🧹🧹🧹🧹  🧹🧹 🧹 🧹🧹  🧹🧹🧹🧹  🧹🧹  🧹🧹"
						@echo "🧹🧹      🧹🧹      🧹🧹      🧹🧹  🧹🧹  🧹🧹  🧹🧹🧹  🧹🧹      🧹🧹  🧹🧹   " 
						@echo "🧹🧹🧹🧹  🧹🧹🧹🧹  🧹🧹🧹🧹  🧹🧹  🧹🧹  🧹🧹    🧹🧹  🧹🧹🧹🧹  🧹🧹🧹🧹   "
						@echo " "

fclean:					clean
						@$(RM) $(NAME)

re:						fclean $(NAME)

.PHONY:					all clean fclean re bonus

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    srcs.mk                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cesar <cesar@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/01 12:18:49 by mpitot            #+#    #+#              #
#    Updated: 2024/05/31 09:02:01 by cesar            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	$(MAIN)		\
			$(PARSING)	\
			$(EXIT)


DIR_MAIN	=	main/

SRC_MAIN	=	main.c	\
				exit_errors.c \
				construct_app.c \
				draw.c \
				key_events.c \
				moove.c \
				raycasting.c

MAIN	=	$(addprefix $(DIR_MAIN), $(SRC_MAIN))

DIR_PARS	=	parsing/

SRC_PARS	=	parsing.c			\
				read_map_file.c		\
				info_extract.c		\
				info_verif.c		\
				map_parsing.c			\
				map_verif.c
				
PARSING		=	$(addprefix $(DIR_PARS), $(SRC_PARS))

DIR_EXIT	=	exit-management/
SRC_EXIT	=	exit.c	\
				free.c
EXIT		=	$(addprefix $(DIR_EXIT), $(SRC_EXIT))
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    srcs.mk                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cefuente <cefuente@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/01 12:18:49 by mpitot            #+#    #+#              #
#    Updated: 2024/06/03 11:15:18 by cefuente         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	$(MAIN)		\
			$(MINIMAP)	\
			$(PARSING)	\
			$(EXIT)


DIR_MAIN	=	main/
SRC_MAIN	=	main.c	\
				exit_errors.c \
				construct_app.c \
				draw.c \
				key_events.c \
				moove.c \
				raycasting.c \
				textures.c

MAIN	=	$(addprefix $(DIR_MAIN), $(SRC_MAIN))

DIR_MINI	=	minimap/
SRC_MINI	=	minimap.c	\
				minimap_utils.c
MINIMAP	=	$(addprefix $(DIR_MINI), $(SRC_MINI))


DIR_PARS	=	parsing/
SRC_PARS	=	parsing.c			\
				read_map_file.c		\
				info_extract.c		\
				info_verif.c		\
				map_parsing.c		\
				map_verif.c			\
				parsing_utils.c
PARSING		=	$(addprefix $(DIR_PARS), $(SRC_PARS))

DIR_EXIT	=	exit-management/
SRC_EXIT	=	exit.c	\
				free.c
EXIT		=	$(addprefix $(DIR_EXIT), $(SRC_EXIT))
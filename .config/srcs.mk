# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    srcs.mk                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cefuente <cefuente@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/01 12:18:49 by mpitot            #+#    #+#              #
#    Updated: 2024/05/27 15:36:41 by cefuente         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	$(MAIN)





DIR_MAIN	=	main/

SRC_MAIN	=	main.c	\
				exit_errors.c \
				construct_app.c \
				draw.c \
				key_events.c \
				moove.c

MAIN	=	$(addprefix $(DIR_MAIN), $(SRC_MAIN))


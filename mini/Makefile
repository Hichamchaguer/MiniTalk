# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hchaguer <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/30 23:11:52 by hchaguer          #+#    #+#              #
#    Updated: 2022/12/30 23:11:55 by hchaguer         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = MiniTalk.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

 SRCS = client.c \
 		server.c \
 		ft_atoi.c \
		client_bonus.c \
		server_bonus.c \
   		./ft_printf/ft_printf.c \
		./ft_printf/ft_putchar.c \
		./ft_printf/ft_putnbr.c \
		./ft_printf/ft_putnbrhex.c \
		./ft_printf/ft_putstr.c \
		./ft_printf/ft_putnbrunsigned.c \
		./ft_printf/ft_putnbrhex_lower.c \
		./ft_printf/checkinput.c \


OBJS = ${SRCS:.c=.o}

target: server client

.SILENT:
all : ${target}

BONUS: client_b server_b 

${NAME}: ${OBJS}
	ar -r ${NAME} ${OBJS}

server : ${NAME}
	$(CC) $(CFLAGS) server.c ${NAME} -o server

client : ${NAME}
	$(CC) $(CFLAGS) client.c ${NAME} -o client

server_b : ${NAME}
	$(CC) $(CFLAGS) server_bonus.c ${NAME} -o server_b

client_b : ${NAME}
	$(CC) $(CFLAGS) client_bonus.c ${NAME} -o client_b

clean : 
	rm -rf ${OBJS}

fclean :clean
	rm -rf ${NAME} client server server_b client_b

re : fclean server client

re_bonus : server_b client_b
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ayagmur <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/04 13:50:30 by ayagmur           #+#    #+#              #
#    Updated: 2022/12/15 17:59:50 by ayagmur          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CNAME = client
SNAME = server
CC = gcc
CFLAGS = -Wall -Werror -Wextra
CSRCS =	minitalk_client.c \
		ft_printf/ft_printf.c \
		ft_printf/lib/ft_putstr.c \
		ft_printf/lib/ft_putchar.c \
		ft_printf/lib/ft_strlen.c \
		ft_printf/srcs/ft_itoa.c \
		ft_printf/srcs/ft_itoa_unsigned.c \
		ft_printf/srcs/isconvchar.c \
		ft_printf/srcs/type_manager.c \
		ft_printf/srcs/convert_to_basesix.c \
		lib/ft_atoi.c

SSRCS =	minitalk_serv.c \
		ft_printf/ft_printf.c \
		ft_printf/lib/ft_putstr.c \
		ft_printf/lib/ft_putchar.c \
		ft_printf/lib/ft_strlen.c \
		ft_printf/srcs/ft_itoa.c \
		ft_printf/srcs/ft_itoa_unsigned.c \
		ft_printf/srcs/isconvchar.c \
		ft_printf/srcs/type_manager.c \
		ft_printf/srcs/convert_to_basesix.c \
		lib/ft_atoi.c

COBJS = ${CSRCS:.c=.o}
SOBJS = $(SSRCS:.c=.o)

.c.o:
	${CC} ${CFLAGS} -g -c $< -o ${<:.c=.o}

all: $(CNAME) $(SNAME)

$(CNAME): $(COBJS)
	$(CC) $(CFLAGS) -o $(CNAME) $(COBJS)

$(SNAME): $(SOBJS)
	$(CC) $(CFLAGS) -o $(SNAME) $(SOBJS)

clean:
	rm -rf $(COBJS) $(SOBJS)

fclean: clean
	rm -rf $(CNAME) $(SNAME)

re: fclean all

.PHONY: all clean fclean

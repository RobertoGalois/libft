# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: robert0 <fripponsupersonique@42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/31 23:07:04 by robert0           #+#    #+#              #
#    Updated: 2018/06/30 10:03:11 by robert0          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.SUFFIXES:
.PHONY: all clean fclean re

###############################
# Fill with your informations #
###############################

ARNAME = libft.a
SONAME = libft.so
CFLAGS = -Wall -Werror -Wextra

SOURCESFOLD = ./
HEADERSFOLD = ./
OBJECTSFOLD = ./objs

SOURCEFILES = ft_memset.c				\
              ft_bzero.c				\
              ft_memcpy.c				\
              ft_memccpy.c				\
              ft_memmove.c				\
              ft_memchr.c				\
              ft_memrchr.c				\
              ft_memcmp.c				\
              ft_strlen.c				\
              ft_strdup.c				\
              ft_strndup.c				\
              ft_strcpy.c				\
              ft_strncpy.c				\
              ft_strcat.c				\
              ft_strncat.c				\
              ft_strlcat.c				\
              ft_strchr.c				\
              ft_strrchr.c				\
              ft_strbasestr.c			\
              ft_strnbasestr.c			\
              ft_strstr.c				\
              ft_strnstr.c				\
              ft_strncasestr.c			\
              ft_strcasestr.c			\
              ft_strcmp.c				\
              ft_strcasecmp.c			\
              ft_strncmp.c				\
              ft_strncasecmp.c			\
              ft_str_getnbwords_c.c		\
              ft_str_getnbwords_str.c	\
              ft_atoi.c					\
              ft_atol.c					\
              ft_atost.c				\
              ft_atoi_base.c			\
              ft_atol_base.c			\
              ft_atost_base.c			\
              ft_check_base.c			\
              ft_numberlen.c			\
              ft_isalpha.c				\
              ft_isalpha_upper.c		\
              ft_isalpha_lower.c		\
              ft_isdigit.c				\
              ft_isalnum.c				\
              ft_isascii.c				\
              ft_isprint.c				\
              ft_toupper.c				\
              ft_tolower.c				\
              ft_strtoupper.c			\
              ft_strtolower.c			\
              ft_memalloc.c				\
              ft_memdel.c				\
              ft_strnew.c				\
              ft_strdel.c				\
              ft_strclr.c				\
              ft_striter.c				\
              ft_striteri.c				\
              ft_strmap.c				\
              ft_strmapi.c				\
              ft_strequ.c				\
              ft_strcaseequ.c			\
              ft_strnequ.c				\
              ft_strncaseequ.c			\
              ft_strsub.c				\
              ft_strjoin.c				\
              ft_strtrim.c				\
              ft_strtrim_c.c			\
              ft_strtrim_str.c			\
              ft_strsplit_c.c			\
              ft_strsplit.c				\
              ft_strsplit_str.c			\
              ft_itoa.c					\
              ft_ltoa.c					\
              ft_sttoa.c				\
              ft_itoa_base.c			\
              ft_ltoa_base.c			\
              ft_sttoa_base.c			\
              ft_putchar.c				\
              ft_putstr.c				\
              ft_putendl.c				\
              ft_putnbr.c				\
              ft_putchar_fd.c			\
              ft_putstr_fd.c			\
              ft_putendl_fd.c			\
              ft_putnbr_fd.c			\
              ft_lstnew.c				\
              ft_lstdelone.c			\
              ft_lstdel.c				\
              ft_lstremove.c			\
              ft_lstadd.c				\
              ft_lstaddback.c			\
              ft_lstiter.c				\
              ft_lstmap.c				\
              ft_lstsize.c				\
              ft_lstat.c				\
              ft_lstrev.c				\
              ft_lstsort.c				\
              ft_lstgetlast.c			\
              ft_print_memory.c		

HEADERFILES = libft.h

###############
# End filling #
###############

SOURCES = $(patsubst %.c, $(SOURCESFOLD)/%.c, $(SOURCEFILES))
OBJECTFILES = $(SOURCEFILES:.c=.o)
OBJECTS = $(patsubst %.o, $(OBJECTSFOLD)/%.o, $(OBJECTFILES))

all: $(ARNAME)

$(ARNAME): $(OBJECTS) $(HEADERFILES)
	ar rc $(ARNAME) $(OBJECTS)
	ranlib $(ARNAME)

$(SONAME): $(OBJECTS) $(HEADERFILES)
	gcc -shared -fPIC -Wl,-soname,$(SONAME) -o $(SONAME) $(OBJECTS) -lc

$(OBJECTSFOLD)/%.o: $(SOURCESFOLD)/%.c
	gcc -c -fPIC $^ -I$(HEADERSFOLD) -o $@ $(CFLAGS)

clean:
	/bin/rm -f $(OBJECTS)

fclean: clean
	/bin/rm -f $(ARNAME)

re: fclean all

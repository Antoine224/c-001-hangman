NAME	=	hangman

SRCS	=	$(shell find . -name "*.c")
# change srcs

OBJS	=	$(SRCS:.c=.o)

FLAGS	=	-Wall -Wextra -Werror -g

all:	$(NAME)

$(NAME):	$(OBJS)
	$(CC) -o $(NAME) $(OBJS) $(FLAGS)

del_name:
	$(RM) $(NAME)

clean: del_name
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(OBJS)
	$(RM) *.gcda
	$(RM) *.gcno

re:	del_name all

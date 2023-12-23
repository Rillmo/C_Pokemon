SRCS =	sources/main.c \
		sources/render.c \
		sources/read.c \
		sources/setting.c

OBJS =	$(patsubst sources%, objects%, $(SRCS:.c=.o))

CC =	cc -Wall -Wextra -Werror
NAME =	pokemon

INC =	-I./includes
LIB =	-L./libft -lft -L./mlx -lmlx
FRAMEWORK = -framework OpenGL -framework AppKit

LIBFT =		libft/libft.a
GNL_SRCS = 	get_next_line/get_next_line.c \
			get_next_line/get_next_line_utils.c
GNL_OBJS =	$(GNL_SRCS:.c=.o)

all : $(LIBFT) objects $(NAME)

objects :
	@mkdir -p objects

# objects/%.o
$(NAME) : $(GNL_OBJS) $(OBJS)
	@$(CC) $^ $(LIB) $(FRAMEWORK) $(INC)/so_long.h -o $@
	@echo " [ so_long ready ] "

objects/%.o : sources/%.c
	@echo " [ comipling so_long... ]"
	@$(CC) -c $^ -o $@ $(INC)

get_next_line/%.o : get_next_line/%.c
	@echo " [ comipling gnl... ]"
	@$(CC) -c $^ -o $@

$(LIBFT) :
	@echo " [ comipling libft... ] "
	@make -s -C libft bonus
	@echo " [ libft ready ] "

clean :
	@echo " [ cleaning so_long... ]"
	@make clean -s -C libft
	@rm -f $(GNL_OBJS) $(OBJS)
	@echo " [ so_long cleaned ] "

fclean : clean
	@echo " [ fcleaning so_long... ]"
	@make fclean -s -C libft
	@rm -f $(LIBFT) $(NAME)
	@echo " [ so_long fcleaned ] "

re :
	make fclean
	make all

.PHONY: clean fclean re

SRCS =	sources/main.c

OBJS =	$(patsubst sources%, objects%, $(SRCS:.c=.o))

CC =	cc -Wall -Wextra -Werror
NAME =	so_long

INC =	-I./includes
LIB =	-L./mlx -lmlx
MLX =	mlx/libmlx.a
FRAMEWORK = -framework OpenGL -framework AppKit

# GNL_SRCS = 	get_next_line/get_next_line.c \
# 		get_next_line/get_next_line_utils.c
# GNL_OBJS =	$(GNL_SRCS:.c=.o)

all : objects $(NAME)

objects :
	@mkdir -p objects

# objects/%.o
$(NAME) : $(MLX) $(OBJS)
	@$(CC) $^ $(LIB) $(FRAMEWORK) $(INC)/so_long.h -o $@
	@echo " [ so_long ready ] "

objects/%.o : sources/%.c
	@echo " [ comipling so_long... ]"
	@$(CC) -c $^ -o $@ $(INC)

# get_next_line/%.o : get_next_line/%.c
# 	@echo " [ comipling gnl... ]"
# 	@$(CC) -c $^ -o $@

$(MLX) :
	make -C mlx

clean :
	@echo " [ cleaning so_long... ]"
	@rm -f $(OBJS)
	@echo " [ so_long cleaned ] "

fclean : clean
	@echo " [ fcleaning so_long... ]"
	@rm -f $(NAME)
	@echo " [ so_long fcleaned ] "

re :
	make fclean
	make all

.PHONY: clean fclean re

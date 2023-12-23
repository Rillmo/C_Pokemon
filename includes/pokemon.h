#ifndef POKEMON_H
# define POKEMON_H

# include <stdio.h>
# include "../mlx/mlx.h"

# define TILE_SIZE 16

typedef struct t_game
{
	void	*mlx;
	void	*win;
}	t_game;

#endif
#ifndef POKEMON_H
# define POKEMON_H

# include <stdio.h>
# include <fcntl.h>
# include "../mlx/mlx.h"
# include "../libft/libft.h"
# include "../get_next_line/get_next_line.h"

# define TILE_SIZE 16

typedef struct s_imgpack
{
	int		size;
	void	*ground;
	void	*riverside_up_left;
	void	*riverside_up_right;
	void	*riverside_up;
	void	*riverside_down;
	void	*riverside_right;
	void	*riverside_down_right;
	void	*riverside_down_left;
	void	*riverside_left;
	void	*riverside_corner_up_left;
	void	*riverside_corner_up_right;
	void	*riverside_corner_down_left;
	void	*riverside_corner_down_right;
	void	*river;
	void	*big_tree_top_right;
	void	*big_tree_top_left;
	void	*big_tree_mid_right;
	void	*big_tree_mid_left;
	void	*big_tree_bottom_right;
	void	*big_tree_bottom_left;
}	t_imgpack;

typedef struct s_game
{
	void		*mlx;
	void		*win;
	t_imgpack	imgpack;
	int			width;
	int			height;
	char		**map;
}	t_game;

void	set_images(t_game *game);
void	put_images(t_game *game);
void	read_map(t_game *game);

#endif
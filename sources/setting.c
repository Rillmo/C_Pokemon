#include "../includes/pokemon.h"

void	set_images(t_game *game)
{
	game->imgpack.ground = mlx_xpm_file_to_image(game->mlx, \
	"assets/xpm/ground.xpm", &game->imgpack.size, &game->imgpack.size);
	game->imgpack.river = mlx_xpm_file_to_image(game->mlx, \
	"assets/xpm/river.xpm", &game->imgpack.size, &game->imgpack.size);
	game->imgpack.riverside_up = mlx_xpm_file_to_image(game->mlx, \
	"assets/xpm/riverside_up.xpm", &game->imgpack.size, &game->imgpack.size);
	game->imgpack.riverside_up_right = mlx_xpm_file_to_image(game->mlx, \
	"assets/xpm/riverside_up_right.xpm", &game->imgpack.size, &game->imgpack.size);
	game->imgpack.riverside_up_left = mlx_xpm_file_to_image(game->mlx, \
	"assets/xpm/riverside_up_left.xpm", &game->imgpack.size, &game->imgpack.size);
	game->imgpack.riverside_down = mlx_xpm_file_to_image(game->mlx, \
	"assets/xpm/riverside_down.xpm", &game->imgpack.size, &game->imgpack.size);
	game->imgpack.riverside_down_right = mlx_xpm_file_to_image(game->mlx, \
	"assets/xpm/riverside_down_right.xpm", &game->imgpack.size, &game->imgpack.size);
	game->imgpack.riverside_down_left = mlx_xpm_file_to_image(game->mlx, \
	"assets/xpm/riverside_down_left.xpm", &game->imgpack.size, &game->imgpack.size);
	game->imgpack.riverside_right = mlx_xpm_file_to_image(game->mlx, \
	"assets/xpm/riverside_right.xpm", &game->imgpack.size, &game->imgpack.size);
	game->imgpack.riverside_left = mlx_xpm_file_to_image(game->mlx, \
	"assets/xpm/riverside_left.xpm", &game->imgpack.size, &game->imgpack.size);
	game->imgpack.riverside_corner_up_left = mlx_xpm_file_to_image(game->mlx, \
	"assets/xpm/riverside_corner_up_left.xpm", &game->imgpack.size, &game->imgpack.size);
	game->imgpack.riverside_corner_up_right = mlx_xpm_file_to_image(game->mlx, \
	"assets/xpm/riverside_corner_up_right.xpm", &game->imgpack.size, &game->imgpack.size);
	game->imgpack.riverside_corner_down_left = mlx_xpm_file_to_image(game->mlx, \
	"assets/xpm/riverside_corner_down_left.xpm", &game->imgpack.size, &game->imgpack.size);
	game->imgpack.riverside_corner_down_right = mlx_xpm_file_to_image(game->mlx, \
	"assets/xpm/riverside_corner_down_right.xpm", &game->imgpack.size, &game->imgpack.size);
	game->imgpack.big_tree_top_right = mlx_xpm_file_to_image(game->mlx, \
	"assets/xpm/big_tree_top_right.xpm", &game->imgpack.size, &game->imgpack.size);
	game->imgpack.big_tree_top_left = mlx_xpm_file_to_image(game->mlx, \
	"assets/xpm/big_tree_top_left.xpm", &game->imgpack.size, &game->imgpack.size);
	game->imgpack.big_tree_mid_right = mlx_xpm_file_to_image(game->mlx, \
	"assets/xpm/big_tree_mid_right.xpm", &game->imgpack.size, &game->imgpack.size);
	game->imgpack.big_tree_mid_left = mlx_xpm_file_to_image(game->mlx, \
	"assets/xpm/big_tree_mid_left.xpm", &game->imgpack.size, &game->imgpack.size);
	game->imgpack.big_tree_bottom_right = mlx_xpm_file_to_image(game->mlx, \
	"assets/xpm/big_tree_bottom_right.xpm", &game->imgpack.size, &game->imgpack.size);
	game->imgpack.big_tree_bottom_left = mlx_xpm_file_to_image(game->mlx, \
	"assets/xpm/big_tree_bottom_left.xpm", &game->imgpack.size, &game->imgpack.size);
}

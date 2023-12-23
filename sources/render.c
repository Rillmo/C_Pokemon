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
}

void	render_riverside(t_game *game, int x, int y)
{
	if (y - 1 >= 0 && game->map[y - 1][x] == '0')	// upside
	{
		if (y + 1 < game->height && game->map[y + 1][x] == '2')
			mlx_put_image_to_window(game->mlx, game->win, \
			game->imgpack.riverside_up, x * TILE_SIZE, y * TILE_SIZE);
		else if (x + 1 < game->width && game->map[y][x + 1] == '0')
			mlx_put_image_to_window(game->mlx, game->win, \
			game->imgpack.riverside_up_right, x * TILE_SIZE, y * TILE_SIZE);
		else if (x - 1 >= 0 && game->map[y][x - 1] == '0')
			mlx_put_image_to_window(game->mlx, game->win, \
			game->imgpack.riverside_up_left, x * TILE_SIZE, y * TILE_SIZE);
	}
	else if (y + 1 < game->height && game->width && game->map[y + 1][x] == '0')	// downside
	{
		if (y - 1 >= 0 && game->map[y - 1][x] == '2')
			mlx_put_image_to_window(game->mlx, game->win, \
			game->imgpack.riverside_down, x * TILE_SIZE, y * TILE_SIZE);
		else if (x + 1 < game->width && game->map[y][x + 1] == '0')
			mlx_put_image_to_window(game->mlx, game->win, \
			game->imgpack.riverside_down_right, x * TILE_SIZE, y * TILE_SIZE);
		else if (x - 1 >= 0 && game->map[y][x - 1] == '0')
			mlx_put_image_to_window(game->mlx, game->win, \
			game->imgpack.riverside_down_left, x * TILE_SIZE, y * TILE_SIZE);
	}
	else if (x + 1 < game->width && game->map[y][x + 1] == '0')	// rightside
	{
		if (x - 1 >= 0 && game->map[y][x - 1] == '2')
			mlx_put_image_to_window(game->mlx, game->win, \
			game->imgpack.riverside_right, x * TILE_SIZE, y * TILE_SIZE);
	}
	else if (x - 1 >= 0 && game->width && game->map[y][x - 1] == '0')	// leftside
	{
		if (x + 1 < game->width && game->map[y][x + 1] == '2')
			mlx_put_image_to_window(game->mlx, game->win, \
			game->imgpack.riverside_left, x * TILE_SIZE, y * TILE_SIZE);
	}
	else if (x + 1 < game->width && game->map[y][x + 1] == '2' && \
			y + 1 < game->height && game->map[y + 1][x] == '2')	// up_left corner
			mlx_put_image_to_window(game->mlx, game->win, \
			game->imgpack.riverside_corner_up_left, x * TILE_SIZE, y * TILE_SIZE);
	else if (x - 1 >= 0 && game->map[y][x - 1] == '2' && \
			y + 1 < game->height && game->map[y + 1][x] == '2')	// up_right corner
			mlx_put_image_to_window(game->mlx, game->win, \
			game->imgpack.riverside_corner_up_right, x * TILE_SIZE, y * TILE_SIZE);
	else if (x + 1 < game->width && game->map[y][x + 1] == '2' && \
			y - 1 >= 0 && game->map[y - 1][x] == '2')	// down_left corner
			mlx_put_image_to_window(game->mlx, game->win, \
			game->imgpack.riverside_corner_down_left, x * TILE_SIZE, y * TILE_SIZE);
	else if (x - 1 < game->width && game->map[y][x - 1] == '2' && \
			y - 1 >= 0 && game->map[y - 1][x] == '2')	// down_right corner
			mlx_put_image_to_window(game->mlx, game->win, \
			game->imgpack.riverside_corner_down_right, x * TILE_SIZE, y * TILE_SIZE);
}

void	put_images(t_game *game)
{
	for (int i=0; i<game->height; i++)
	{
		for (int j=0; j<game->width; j++)
		{
			if (game->map[i][j] == '0')
				mlx_put_image_to_window(game->mlx, game->win, \
				game->imgpack.ground, j * TILE_SIZE, i * TILE_SIZE);
			else if (game->map[i][j] == '1')
				render_riverside(game, j, i);
			else if (game->map[i][j] == '2')
				mlx_put_image_to_window(game->mlx, game->win, \
				game->imgpack.river, j * TILE_SIZE, i * TILE_SIZE);
		}
	}
}

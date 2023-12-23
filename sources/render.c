#include "../includes/pokemon.h"

void	render_riverside(t_game *game, int x, int y)
{
	if (y - 1 >= 0 && game->map[y - 1][x] == '0')	// upside
	{
		if (y + 1 < game->height && game->map[y + 1][x] == 'r')
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
		if (y - 1 >= 0 && game->map[y - 1][x] == 'r')
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
		if (x - 1 >= 0 && game->map[y][x - 1] == 'r')
			mlx_put_image_to_window(game->mlx, game->win, \
			game->imgpack.riverside_right, x * TILE_SIZE, y * TILE_SIZE);
	}
	else if (x - 1 >= 0 && game->width && game->map[y][x - 1] == '0')	// leftside
	{
		if (x + 1 < game->width && game->map[y][x + 1] == 'r')
			mlx_put_image_to_window(game->mlx, game->win, \
			game->imgpack.riverside_left, x * TILE_SIZE, y * TILE_SIZE);
	}
	else if (x + 1 < game->width && game->map[y][x + 1] == 'r' && \
			y + 1 < game->height && game->map[y + 1][x] == 'r')	// up_left corner
			mlx_put_image_to_window(game->mlx, game->win, \
			game->imgpack.riverside_corner_up_left, x * TILE_SIZE, y * TILE_SIZE);
	else if (x - 1 >= 0 && game->map[y][x - 1] == 'r' && \
			y + 1 < game->height && game->map[y + 1][x] == 'r')	// up_right corner
			mlx_put_image_to_window(game->mlx, game->win, \
			game->imgpack.riverside_corner_up_right, x * TILE_SIZE, y * TILE_SIZE);
	else if (x + 1 < game->width && game->map[y][x + 1] == 'r' && \
			y - 1 >= 0 && game->map[y - 1][x] == 'r')	// down_left corner
			mlx_put_image_to_window(game->mlx, game->win, \
			game->imgpack.riverside_corner_down_left, x * TILE_SIZE, y * TILE_SIZE);
	else if (x - 1 < game->width && game->map[y][x - 1] == 'r' && \
			y - 1 >= 0 && game->map[y - 1][x] == 'r')	// down_right corner
			mlx_put_image_to_window(game->mlx, game->win, \
			game->imgpack.riverside_corner_down_right, x * TILE_SIZE, y * TILE_SIZE);
}

void	render_tree(t_game *game, int x, int y)
{
	mlx_put_image_to_window(game->mlx, game->win, \
	game->imgpack.big_tree_top_left, x * TILE_SIZE, y * TILE_SIZE);
	game->map[x][y] = 'T';
	if (x + 1 < game->width)
	{
		mlx_put_image_to_window(game->mlx, game->win, \
		game->imgpack.big_tree_top_right, (x + 1) * TILE_SIZE, y * TILE_SIZE);
		game->map[x + 1][y] = 'T';
	}
	if (y + 1 < game->height)
	{
		mlx_put_image_to_window(game->mlx, game->win, \
		game->imgpack.big_tree_top_right, x * TILE_SIZE, (y + 1) * TILE_SIZE);
		game->map[x][y + 1] = 'T';
	}
	if (x + 1 < game->width && y + 1 < game->height)
	{
		mlx_put_image_to_window(game->mlx, game->win, \
		game->imgpack.big_tree_top_right, (x + 1) * TILE_SIZE, (y + 1) * TILE_SIZE);
		game->map[x + 1][y + 1] = 'T';
	}
	if (x + 1 < game->width && y + 2 < game->height)
	{
		mlx_put_image_to_window(game->mlx, game->win, \
		game->imgpack.big_tree_top_right, (x + 1) * TILE_SIZE, (y + 2) * TILE_SIZE);
		game->map[x + 1][y + 2] = 'T';
	}
	if (x + 2 < game->width && y + 2 < game->height)
	{
		mlx_put_image_to_window(game->mlx, game->win, \
		game->imgpack.big_tree_top_right, (x + 2) * TILE_SIZE, (y + 2) * TILE_SIZE);
		game->map[x + 2][y + 2] = 'T';
	}
}

void	render_river(t_game *game, int x, int y)
{
	mlx_put_image_to_window(game->mlx, game->win, \
	game->imgpack.river, x * TILE_SIZE, y * TILE_SIZE);
}

void	render_ground(t_game *game, int x, int y)
{
	mlx_put_image_to_window(game->mlx, game->win, \
	game->imgpack.ground, x * TILE_SIZE, y * TILE_SIZE);
}

void	put_images(t_game *game)
{
	for (int i=0; i<game->height; i++)
	{
		for (int j=0; j<game->width; j++)
		{
			render_ground(game, j, i);
			if (game->map[i][j] == 's')
				render_riverside(game, j, i);
			// else if (game->map[i][j] == 'r')
			// 	render_river(game, j, i);
			// else if (game->map[i][j] == 't')
			// 	mlx_put_image_to_window(game->mlx, game->win, \
			// 	game->imgpack.big_tree_top_left, j * TILE_SIZE, i * TILE_SIZE);
		}
	}
}
